# VACAEX - Rating 144

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Vacation Excitement

Chef has planned a vacation with his friends in the month of March, and is really looking forward to it!

The vacation begins on the $X$-th of March.

As days get closer to the vacation date, Chef gets more and more excited for it.
Chef's  *excitement level*  starts at $Y$ on March $1$. It will then increase by $1$ for every day that passes; so it will be $Y+1$ on March $2$-nd, $Y+2$ on March $3$-rd, and so on.

What will Chef's  *excitement level*  be on the day the vacation begins?

### Input Format
- The only line of input will contain two space-separated integers $X$ and $Y$ — the date of the trip and Chef's excitement level on March $1$-st, respectively.
### Output Format

Output a single integer: Chef's excitement level on the day the vacation begins.

### Constraints
- $1 \le X \le 31$
- $1 \le Y \le 10$
### Sample 1:
Input
Output

```
3 5
```

```
7
```

### Explanation:

The vacation begins on March third.
Chef's excitement starts at $5$, then increases to $6$ on March $2$-nd and then to $7$ on March $3$-rd.
The answer is Chef's excitement on March $3$-rd, which is $7$.

### Sample 2:
Input
Output

```
1 8
```

```
8
```

### Explanation:

The vacation begins on March $1$-st; so the answer is just Chef's initial excitement, which is $8$.

### Sample 3:
Input
Output

```
27 6
```

```
32

```

### Explanation:

Chef's excitement starts at $6$, and keeps increasing by $1$ every day.
Finally, on March $27$, it will be $32$.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T04:01:09.676Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,Y;
	cin>>X>>Y;
	for (i=0; i<X; i++) {
	    Y++;
	}
	cout<<Y;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/VACAEX)