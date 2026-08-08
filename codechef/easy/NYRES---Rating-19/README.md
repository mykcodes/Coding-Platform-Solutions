# NYRES - Rating 19

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### New Year Resolution

To start the year $2026$ off, Chef made a resolution to exercise daily. He decided to do exactly $X$ push-ups every day.

If he sticks to his resolution, how many push-ups will he do in the month of January?

Note that the month of January has $31$ days.

### Input Format
- The first and only line of input will contain a single integer $X$, denoting the number of push-ups Chef does every day.
### Output Format

Output a single integer: the number of push-ups Chef will do in January.

### Constraints
- $1 \leq X \leq 100$
### Sample 1:
Input
Output

```
5

```

```
155

```

### Explanation:

Doing $5$ push-ups every day, Chef will end up doing $5\times 31 = 155$ push-ups in January.

### Sample 2:
Input
Output

```
100
```

```
3100
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T17:06:00.140Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	cout<<31*x;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/NYRES)