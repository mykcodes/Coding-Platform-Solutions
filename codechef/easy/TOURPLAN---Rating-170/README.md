# TOURPLAN - Rating 170

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Tour Plan

Chef is going on a roadtrip, and is trying to figure out how much it will cost him.

His cab operator gives him the following rates:

- A fixed cost of $X$ rupees that will cover up to $50$ kilometers, and
- Every kilometer past the $50$-th has a cost of $Y$ rupees per kilometer.

Chef's destination is $Z$ kilometers away. How much will he need to pay?

### Input Format
- The only line of input will contain three space-separated integers $X, Y,$ and $Z$ — the fixed cost for $50$ kilometers, the cost per kilometer after that, and the distance Chef needs to travel.
### Output Format

Print a single integer: the amount that Chef needs to pay, in rupees.

### Constraints
- $1 \le X, Y, Z \le 1000$
### Sample 1:
Input
Output

```
500 20 29

```

```
500

```

### Explanation:

The distance Chef must travel equals $Z = 29$ kilometers.
Since it doesn't exceed $50$ kilometers, he only needs to pay the fixed cost of $X = 500$.

### Sample 2:
Input
Output

```
500 20 69

```

```
880

```

### Explanation:

The distance Chef must travel equals $Z = 69$ kilometers.
The first $50$ kilometers have a fixed cost of $X = 500$, and each kilometer after that costs $Y = 20$.
There are $69 = 50 = 19$ extra kilometers, so the extra cost is $19\times 20 = 380$ rupees.
The total cost is hence $500 + 380 = 880$ rupees.

### Sample 3:
Input
Output

```
678 43 473

```

```
18867
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-18T04:51:42.298Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,Y,Z;
	cin>>X>>Y>>Z;
	if (Z<50) {
	    cout<<X;
	} else {
	    cout<<X+((50-Z)*Y);
	}
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TOURPLAN)