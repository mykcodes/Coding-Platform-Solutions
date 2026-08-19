# MEXMAX7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mex and Max

You are given an array $A$ containing $N$ integers. Find the number of non-empty subsequences $B$ of $A$ such that:

- $|\text{mex}(B) - \max(B)| \le 1$

Here, $\text{mex}(B)$ represents the minimum non-negative integer not present in $B$, and $\max(B)$ represents the maximum element of $B$.

Since the answer may be large, find it modulo $998244353$. $2$ subsequences are different if the indices chosen are different, even if the elements are the same.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the number of subsequences satisfying $|\text{mex}(B) - \max(B)| \le 1$ modulo $998244353$.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $0 \le A_i \le N$
### Sample 1:
Input
Output

```
5
3
0 1 2
6
2 2 1 0 0 4
5
0 1 2 3 4
5
1 1 1 2 2
3
3 3 3

```

```
5
34
9
7
0
```

### Explanation:

 **Test Case 1:**  The following are the good subsequences : $[0], [0, 1], [0, 1, 2], [1], [0, 2]$. For example, the first has a $\text{MEX}$ of $1$ and a $\max$ of $0$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T14:45:23.815Z  

```c_cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    
    // We only care about frequencies of elements up to n + 2
    vector<int> freq(n + 3, 0);
    for (int i = 0; i < n; ++i) {
        long long val;
        cin >> val;
        if (val <= n + 2) {
            freq[val]++;
        }
    }
    
    // Precompute powers of 2 modulo 998244353
    vector<long long> pow2(n + 1);
    pow2[0] = 1;
    for (int i = 1; i <= n; ++i) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }
    
    long long ans = 0;
    
    // --- Count Type 1 Subsequences ---
    long long prod = 1;
    for (int v = 0; v <= n + 1; ++v) {
        long long choices = (pow2[freq[v]] - 1 + MOD) % MOD;
        prod = (prod * choices) % MOD;
        ans = (ans + prod) % MOD;
        if (prod == 0) {
            break; // If a required element is missing, further extensions are impossible
        }
    }
    
    // --- Count Type 2 Subsequences ---
    prod = 1;
    for (int v = 0; v <= n + 1; ++v) {
        long long choices_v_plus_1 = (pow2[freq[v + 1]] - 1 + MOD) % MOD;
        long long current_ways = (prod * choices_v_plus_1) % MOD;
        ans = (ans + current_ways) % MOD;
        
        // Update product for the next iteration (prefix 0 to v must be chosen)
        long long choices_v = (pow2[freq[v]] - 1 + MOD) % MOD;
        prod = (prod * choices_v) % MOD;
        if (prod == 0) {
            break;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    // Optimize standard I/O operations for competitive programming
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

[View on CodeChef](https://www.codechef.com/problems/MEXMAX7)