# EXREST - Rating 123

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Exercise and Rest

Chef is on a new exercise plan: he'll work out for two days, then take one rest day, and then repeat.

Today is Chef's $N$-th rest day. How many days (including today) has it been since Chef started his plan?

### Input Format
- The only line of input contains a single integer $N$.
### Output Format

Output a single integer: the number of days that have passed since Chef started his exercise plan.

### Constraints
- $1 \leq N \leq 10$
### Sample 1:
Input
Output

```
2

```

```
6

```

### Explanation:

Today is the second rest day. That means Chef's schedule has been as follows:

- Day $1$: Work out
- Day $2$: Work out
- Day $3$: Rest day $1$
- Day $4$: Work out
- Day $5$: Work out
- Day $6$: Rest day $2$ (today)

So, six days have passed in total.

### Sample 2:
Input
Output

```
4
```

```
12
```

### Explanation:

Today is the fourth rest day. That means Chef's schedule has been as follows:

- Day $1$: Work out
- Day $2$: Work out
- Day $3$: Rest day $1$
- Day $4$: Work out
- Day $5$: Work out
- Day $6$: Rest day $2$
- Day $7$: Work out
- Day $8$: Work out
- Day $9$: Rest day $3$
- Day $10$: Work out
- Day $11$: Work out
- Day $12$: Rest day $4$ (today)

So, twelve days have passed in total.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T17:08:35.273Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A;
	cin>>A;
	cout<<A*3;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXREST)