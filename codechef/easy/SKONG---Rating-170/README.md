# SKONG - Rating 170

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Endless Play

Chef's most anticipated game,  *Empty Knight: Wool Aria*, released on September $4$-th at midnight.

Since the instant it released, Chef has been playing it non-stop, and completely lost track of time.

If the current date is the $X$-th of September, and the current time is $H$ hours past midnight, how many hours has Chef been playing?

Note that each day has $24$ hours.

### Input Format
- The first and only line of input consists of two space-separated integers $X$ and $H$ — the current date, and the current time (in hours past midnight).
### Output Format

Output a single integer: the number of hours Chef has been playing for.

### Constraints
- $4 \le X \le 30$
- $0 \le H \lt 24$
### Sample 1:
Input
Output

```
5 10

```

```
34

```

### Explanation:

It is $10$ hours past midnight on September $5$-th.
Chef has played for all of $4$-th September, and $10$ hours on the $5$-th, for $24+10 = 34$ hours in total.

### Sample 2:
Input
Output

```
4 18
```

```
18
```

### Explanation:

It is $18$ hours past midnight on September $4$-th.
Chef has played only $18$ hours on the $4$-th.

### Sample 3:
Input
Output

```
10 2

```

```
146
```

### Explanation:

It is $2$ hours past midnight on September $10$-th.
Chef has played for all of $4$-th through $9$-th of September, and $2$ hours on the $10$-th.
That's six full days and two hours, for a total of $24+24+24+24+24+24+2 = 146$ hours.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-12T08:31:43.271Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,H;
	cin >> X >> H;
	cout<<(X-4)*24+H;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SKONG)