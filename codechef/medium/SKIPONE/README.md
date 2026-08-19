# SKIPONE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Skip one

You have $K$ coins with you, and up ahead are $N$ items. The $i$-th item costs you $A_i$ coins to buy.

You also have a special one-time only discount coupon, which can be used to make one item of your choice free to buy.

You have a special constraint that you can buy items in the order $1, 2, \ldots, N$, and if you choose to not buy some item, you cannot buy the later ones either.

Find the maximum number of items you can buy under these constraints.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum items you can buy.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $1 \le A_i \le 10^4$
- $1 \le K \le 10^9$
### Sample 1:
Input
Output

```
3
7 11
1 2 3 4 5 6 1
2 5
7 7
4 4
100 2 1 1

```

```
5
1
4
```

### Explanation:

 **Test Case 1:**  We can buy the first $5$ items, using a discount token on the fifth, spending a total of $1 + 2 + 3 + 4 = 10$ coins on the others. Note that we cannot buy the $7$th item even though we have the coins left for it, because we are forced to buy the $6$th first.

 **Test Case 2:**  We do not have enough coins for any items, but we can still use our discount token for the first.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T14:44:24.872Z  

```c_cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long k;
    // Assuming the first line contains both N and K as K is required
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    long long current_sum = 0;
    long long max_element = 0;
    int max_items = 0;
    
    for (int i = 0; i < n; ++i) {
        current_sum += a[i];
        max_element = max(max_element, a[i]);
        
        // Effective cost after using the coupon on the most expensive item so far
        long long effective_cost = current_sum - max_element;
        
        if (effective_cost <= k) {
            max_items = i + 1;
        } else {
            // Since costs are non-negative, if we can't afford the prefix up to 'i',
            // we won't be able to afford any longer prefixes either.
            break;
        }
    }
    
    cout << max_items << "\n";
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

[View on CodeChef](https://www.codechef.com/problems/SKIPONE)