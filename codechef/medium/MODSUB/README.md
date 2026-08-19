# MODSUB

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Modify and Subtract

A given array $A$ is said to be good if it can be transformed into $[0, 0, \ldots, 0]$ with the use of the following operation used multiple times (possibly $0$):

- Choose an index $i$ ($1 \le i < N$) and subtract $1$ from each of $A_i$ and $A_{i + 1}$.

You are given an array $A$ of $N$ integers.

Count the number of indices $i$ ($1 \le i \le N$) such that there exists a valid integer $X$ where after changing $A_i = X$, the array $A$ is good.

Note that you may choose $X = A_i$ itself, and not change the array at all.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the number of indices $i$ such that there exists valid $X$.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $0 \le A_i \le 10^9$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
3
3
1 1 1
5
3 4 0 4 3
2
3 3

```

```
3
1
2
```

### Explanation:

 **Test Case 1:**  We can do the following changes for each index :

- $i = 1$ : Update $A_1 = 0$. The array $[0, 1, 1]$ is good.
- $i = 2$ : Update $A_2 = 2$. The array $[1, 2, 1]$ is good.
- $i = 3$ : Update $A_3 = 0$. The array $[1, 1, 0]$ is good.

 **Test Case 2:**  The only valid index is $i = 3$, and that has to be changed to $2$. The array is $[3, 4, 2, 4, 3]$ which is good.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T14:46:17.834Z  

```c_cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long INF = 1e18;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Step 1: Compute the alternating prefix array A'
    vector<long long> a_prime(n);
    long long curr = 0;
    for (int i = 0; i < n; ++i) {
        curr = a[i] - curr;
        a_prime[i] = curr;
    }
    
    // Step 2: Find the first index where A' becomes negative
    int first_neg = n;
    for (int i = 0; i < n; ++i) {
        if (a_prime[i] < 0) {
            first_neg = i;
            break;
        }
    }
    
    // Step 3: Compute suffix minimums based on parity relative to the last element (n - 1)
    vector<long long> suff_same(n + 1, INF);
    vector<long long> suff_diff(n + 1, INF);
    
    for (int k = n - 1; k >= 0; --k) {
        suff_same[k] = suff_same[k + 1];
        suff_diff[k] = suff_diff[k + 1];
        
        if ((k - (n - 1)) % 2 == 0) {
            suff_same[k] = min(suff_same[k], a_prime[k]);
        } else {
            suff_diff[k] = min(suff_diff[k], a_prime[k]);
        }
    }
    
    // Step 4: Count all valid indices i where a valid X exists
    int valid_indices_count = 0;
    long long final_val = a_prime[n - 1];
    
    for (int i = 0; i < n; ++i) {
        // Elements strictly before i cannot already be negative
        if (i > first_neg) {
            continue;
        }
        
        // Suffix elements with the same parity as (n - 1) must be >= final_val
        bool cond_same = (suff_same[i] >= final_val);
        // Suffix elements with different parity must be >= -final_val
        bool cond_diff = (suff_diff[i] >= -final_val);
        
        if (cond_same && cond_diff) {
            valid_indices_count++;
        }
    }
    
    cout << valid_indices_count << "\n";
}

int main() {
    // Optimize standard input/output streams for efficiency
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

[View on CodeChef](https://www.codechef.com/problems/MODSUB)