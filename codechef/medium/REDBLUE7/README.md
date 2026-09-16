# REDBLUE7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Red and Blue Elements

You are given an array $A$ of $N$ integers. You want to colour each element either red or blue.

After doing so, let $S_R$ denote the sum of all red elements, $S_B$ denote the sum of all blue elements, $C_R$ denote the count of red elements, and $C_B$ denote the count of blue elements.

Find the maximum possible value of $S_R \cdot C_B + S_B \cdot C_R$ over all possible colourings.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum value of $S_R \cdot C_B + S_B \cdot C_R$.

### Constraints
- $1 \leq T \leq 10^4$
- $2 \le N \le 2 \cdot 10^5$
- $1 \le A_i \le 10^7$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$
### Sample 1:
Input
Output

```
3
3
1 1 1
3
4 2 1
5
6 4 8 3 7

```

```
4
11
71
```

### Explanation:

 **Test Case 1:**  We can colour the first element red, and the other $2$ blue. Then, $S_R = C_R = 1$ and $S_B = C_B = 2$, and the value $S_R \cdot C_B + S_B \cdot C_R$ is $4$.

 **Test Case 2:**  Optimal is to colour the first elememt red and other $2$ blue again. Then, $S_R = 4, C_R = 1, S_B = 3, C_B = 2$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T16:22:51.285Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    vector<long long> a(n);
    long long total_sum = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        total_sum += a[i];
    }
    sort (a.begin(), a.end());
    vector <long long> pref (n+1, 0);
    for (int i =0; i<n; i++) {
        pref[i+1] = pref[i] + a [i];
    }
    long long max_val = 0;
    for (int k =1; k<n; k++) {
        long long s_r = 0;
        if (k <= n/2) {
            s_r = total_sum - pref[n-k];
        } else {
        s_r = pref[k];
        }
        long long s_b = total_sum - s_r;
        long long current_val = s_r * (n-k)+s_b*k;
        max_val = max (max_val, current_val);
    }
    cout<<max_val<<endl;
    
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    solve();
	}
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/REDBLUE7)