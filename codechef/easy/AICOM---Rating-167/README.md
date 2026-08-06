# AICOM - Rating 167

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### AI is Coming

You are given an assignment from your institute.

Each assignment has a difficulty value between $1$ and $100$ (both inclusive).
AI can solve an assignment if and only if the difficulty of the assignment is  **less than or equal to**  $60$.

Your current assignment has difficulty $X$.
Is AI capable of solving your assignment?
Print `"YES"` if it is, and `"NO"` if it isn't (without the quotes).

### Input Format
- The first and only line of input will contain a single integer $X$, denoting the difficulty of your assignment.
### Output Format
- If AI is capable of solving your assignment output "YES", otherwise print "NO" (without quotes).

Each character of the output may be printed in either uppercase or lowercase, i.e, the strings `no`, `NO`, `No`, and `nO` will all be treated as equivalent.

### Constraints
- $1 \leq X \leq 100$
### Sample 1:
Input
Output

```
60
```

```
YES
```

### Explanation:

The difficulty of the assignment is $\leq 60$, so AI can solve it.

### Sample 2:
Input
Output

```
40
```

```
YES
```

### Explanation:

The difficulty of the assignment is $\leq 60$, so AI can solve it.

### Sample 3:
Input
Output

```
69
```

```
NO
```

### Explanation:

The difficulty of the assignment is $\gt 60$, so AI cannot solve it.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-06T11:23:02.257Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A;
	cin>>A;
	A<=60
	? cout << "Yes"
	: cout << "No";
	return 0;
	

}

```

---

[View on CodeChef](https://www.codechef.com/problems/AICOM)