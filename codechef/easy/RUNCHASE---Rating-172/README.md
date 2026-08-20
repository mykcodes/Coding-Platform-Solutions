# RUNCHASE - Rating 172

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Run Chase

Chef is watching a T20 cricket match.

The team batting first has scored $N$ runs.

The team batting second will bat for $20$ overs. To win the match, they must score  **strictly**  more than $N$ runs.

Find the smallest integer run rate $R$, in runs per over, such that scoring $R$ runs in each of the $20$ overs is enough to win the match.

### Input Format
- The only line of input contains a single integer $N$ — the number of runs scored by the team batting first.
### Output Format

Output a single integer $R$ — the smallest integer run rate to win the match.

### Constraints
- $50 \leq N \leq 300$
### Sample 1:
Input
Output

```
155
```

```
8
```

### Explanation:

If the second team scores at a run rate of $7$, they score $20 \cdot 7 = 140$ runs, which is not enough. At a run rate of $8$, they score $20 \cdot 8 = 160$ runs, which is strictly more than $155$. So the answer is $8$.

### Sample 2:
Input
Output

```
200
```

```
11
```

### Explanation:

If the second team scores at a run rate of $10$, they score $20 \cdot 10 = 200$ runs, which only ties the score. They need to score strictly more than $200$, so the answer is $11$.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T17:56:49.412Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin>>N;
	int R=N/20;
	if (20*R>N) {
	    cout<<R;
	} else {
	    cout << R+1;
	}
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/RUNCHASE)