# COLORB - Rating 273

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Coloured Orbs

Chef has $R$ red orbs, $B$ blue orbs and $0$ green orbs.

He can buy $1$ green orb at the cost of $1$ red orb + $1$ blue orb. (He needs to give both the red and blue orbs in order to buy).

Initially, Chef has a skill of $0$. However each orb that he has at the end, increases his skill by some predetermined quantity.

- $1$ red orb increases his skill by $1$.
- $1$ blue orb increases his skill by $2$.
- $1$ green orb increases his skill by $5$.

Find the maximum skill that Chef can obtain doing trades wisely.

### Input Format
- The first and only line of input contains $2$ integers - $R$ and $B$, the number of red and blue orbs.
### Output Format

Output the maximum skill Chef can obtain

### Constraints
- $1 \le R, B \le 10$
### Sample 1:
Input
Output

```
3 4

```

```
17
```

### Explanation:

Chef can trade $3$ red and blue orbs, for $3$ green orbs. He will be left with $3$ green orbs, and $1$ blue orb. His total skill be $3 \cdot 5 + 2$.

### Sample 2:
Input
Output

```
2 1

```

```
6

```

### Explanation:

Chef can obtain $1$ green and $1$ red orb, which gives him $6$ skill.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-03T17:28:15.270Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int R,B;
	cin>>R>>B;
	int Z=min(R, B);
	cout<<Z*5+(R-Z)*1+(B-Z)*2;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/COLORB)