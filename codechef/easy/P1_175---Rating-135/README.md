# P1_175 - Rating 135

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Assignment Due

You are eagerly awaiting for the upcoming Technex event organized by IIT BHU Varanasi! However, you also have an assignment due. The deadline for the assignment is in $Y$ days, and it takes you $X$ days to complete it.

Determine whether you can finish the assignment on or before the deadline.

### Input Format

The input consists of two space-separated integers $X$ and $Y$, where:

- $X$ denotes the number of days required to complete the assignment.
- $Y$ denotes the number of days remaining until the deadline.
### Output Format

Print `YES` if you can complete the assignment on or before the due date, otherwise print `NO`

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq X \leq 100$
- $1 \leq Y \leq 100$
### Sample 1:
Input
Output

```
1 2

```

```
YES
```

### Explanation:

You have $2$ days to complete the assignment, and it will take you only $1$ day to finish it.

### Sample 2:
Input
Output

```
2 2

```

```
YES
```

### Explanation:

You have $2$ days to complete the assignment, and it will take you only $2$ day to finish it.

### Sample 3:
Input
Output

```
3 2

```

```
NO
```

### Explanation:

You have $2$ days to complete the assignment, but it will take you $3$ days to finish, making it impossible for you to meet the deadline.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-15T14:42:50.342Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,Y;
	cin>>X>>Y;
	if (X<=Y) {
	    cout<<"Yes"; }
	if(X>Y) {
	cout<<"No"; }
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/P1_175)