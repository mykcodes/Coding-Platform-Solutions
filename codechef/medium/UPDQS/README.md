# UPDQS

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Update Queries

For an array $A$, define $f(A)$ as the  **minimum sum**  of the array $A$ possible by using the following operation multiple times (possibly $0$):

- Choose an index $i$ ($1 < i < N$) and update $A_i = A_{i + 1} + A_{i - 1} - A_i$.

You are given an array $A$ of $N$ integers.

There are $Q$ updates:

- Given integers $i$ and $x$, update $A_i = x$ permanently.
- Find $f(A)$ after each update.
### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains $2$ integers - $N$ and $Q$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$. The next $Q$ lines contain $2$ integers each - $i$ and $x$, representing a query.
### Output Format

For each test case, output $Q$ integers, the answers after each update.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $1 \le Q \le 2 \cdot 10^5$
- $1 \le A_i \le 10^7$
- $1 \le i \le N$
- $1 \le x \le 10^7$
- The sum of $N$ and the sum of $Q$ both do not exceed $2 \cdot 10^5$
### Sample 1:
Input
Output

```
2
3 3
1 2 3
2 6
3 10
1 12
5 2
10 3 7 1 15
4 6
4 1

```

```
2
16
28
36
26
```

### Explanation:

 **Test Case 1:**  The following are the answers after each update:

- After update $1$: The array is $[1, 6, 3]$. We can perform an operation with $i = 2$ to get $[1, -2, 3]$ which has a sum of $2$.
- After update $2$ : The array is $[1, 6, 10]$. We can perform an operation with $i = 2$ to get $[1, 5, 10]$ which has a sum of $16$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T14:47:48.273Z  

```c_cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Segment Tree Node
struct Node {
    long long count = 0;
    long long sum = 0;
    long long weighted_sum = 0;
};

class SegmentTree {
    int size;
    vector<Node> tree;
    vector<long long> values;

    void update(int node, int start, int end, int idx, int delta) {
        if (start == end) {
            tree[node].count += delta;
            tree[node].sum += delta * values[start];
            tree[node].weighted_sum = tree[node].count * values[start];
            return;
        }
        int mid = start + (end - start) / 2;
        if (idx <= mid) {
            update(2 * node, start, mid, idx, delta);
        } else {
            update(2 * node + 1, mid + 1, end, idx, delta);
        }
        // Merge logic: right child elements are shifted by left child count
        tree[node].count = tree[2 * node].count + tree[2 * node + 1].count;
        tree[node].sum = tree[2 * node].sum + tree[2 * node + 1].sum;
        tree[node].weighted_sum = tree[2 * node].weighted_sum + 
                                  tree[2 * node + 1].weighted_sum + 
                                  tree[2 * node].count * tree[2 * node + 1].sum;
    }

public:
    SegmentTree(const vector<long long>& compressed_vals) {
        values = compressed_vals;
        size = values.size();
        if (size > 0) {
            tree.resize(4 * size);
        }
    }

    void modify(int idx, int delta) {
        if (size == 0) return;
        update(1, 0, size - 1, idx, delta);
    }

    long long get_weighted_sum() {
        if (size == 0) return 0;
        return tree[1].weighted_sum;
    }
};

void solve() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<pair<int, long long>> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i].first >> queries[i].second;
    }

    // Offline simulation to collect all unique differences for coordinate compression
    vector<long long> all_diffs;
    for (int i = 1; i < n; ++i) {
        all_diffs.push_back(a[i + 1] - a[i]);
    }

    vector<long long> temp_a = a;
    for (int i = 0; i < q; ++i) {
        int idx = queries[i].first;
        long long x = queries[i].second;
        temp_a[idx] = x;
        if (idx > 1) all_diffs.push_back(temp_a[idx] - temp_a[idx - 1]);
        if (idx < n) all_diffs.push_back(temp_a[idx + 1] - temp_a[idx]);
    }

    // Sort in descending order so that larger values map to smaller segment tree indices
    sort(all_diffs.begin(), all_diffs.end(), greater<long long>());
    all_diffs.erase(unique(all_diffs.begin(), all_diffs.end()), all_diffs.end());

    auto get_compressed_idx = [&](long long val) {
        return lower_bound(all_diffs.begin(), all_diffs.end(), val, greater<long long>()) - all_diffs.begin();
    };

    SegmentTree st(all_diffs);
    vector<long long> diff_at(n + 1, 0);

    // Initialize Segment Tree with initial differences
    for (int i = 1; i < n; ++i) {
        diff_at[i] = a[i + 1] - a[i];
        st.modify(get_compressed_idx(diff_at[i]), 1);
    }

    // Process each query
    for (int i = 0; i < q; ++i) {
        int idx = queries[i].first;
        long long x = queries[i].second;

        // Remove old differences affected by changing a[idx]
        if (idx > 1) {
            st.modify(get_compressed_idx(diff_at[idx - 1]), -1);
        }
        if (idx < n) {
            st.modify(get_compressed_idx(diff_at[idx]), -1);
        }

        // Apply update
        a[idx] = x;

        // Compute and add new differences
        if (idx > 1) {
            diff_at[idx - 1] = a[idx] - a[idx - 1];
            st.modify(get_compressed_idx(diff_at[idx - 1]), 1);
        }
        if (idx < n) {
            diff_at[idx] = a[idx + 1] - a[idx];
            st.modify(get_compressed_idx(diff_at[idx]), 1);
        }

        // Answer is N * A[1] + Segment Tree Weighted Sum
        long long ans = n * a[1] + st.get_weighted_sum();
        cout << ans << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/UPDQS)