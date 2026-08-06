# LMP1 - Rating 110

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Protein Diet

You consume $X$ grams of protein daily. A balanced diet requires at least $Y$ grams of protein per day.

Determine whether your daily protein intake fulfills the recommended requirement. The daily protein intake is considered fulfilled if and only if $X$ is greater than or equal to $Y$.

### Input Format
- The first line of input contains two space-separated integers $X$ and $Y$ - the grams of protein consumed daily and the minimum grams of protein recommended respectively.
### Output Format

Print `YES` if the daily protein intake meets or exceeds the recommended amount.
Otherwise, print `NO`.

Each letter of the output may be printed in either uppercase or lowercase, i.e, the strings `NO`, `no`, `No`, and `nO` will all be treated as equivalent.

### Constraints
- $1 \leq X, Y \leq 100$
### Sample 1:
Input
Output

```
80 65

```

```
YES
```

### Explanation:

Since $X = 80$ is greater than $Y = 65$, daily protein intake is fulfilled.

### Sample 2:
Input
Output

```
16 49

```

```
NO
```

### Explanation:

Since $X = 16$ is less than $Y = 49$, daily protein intake is not fulfilled.

### Sample 3:
Input
Output

```
10 10

```

```
YES
```

### Explanation:

Since $X = 10$ is equal to $Y = 10$, daily protein intake is fulfilled.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-06T11:14:41.596Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	(x>=y)
	? cout<<"YES"
	: cout<<"NO";
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/LMP1)