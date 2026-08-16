# SAMESIT - Rating 136

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Seated Together

A bus has $100$ seats arranged in $20$ rows, with $5$ seats in each row. Seats $1$ to $5$ are in the first row, seats $6$ to $10$ are in the second row, and so on.

Chef and Chefina are seated in seats $X$ and $X+1$, respectively.
They can talk to each other during the journey if and only if both seats are in the same row.

Given $X$, determine whether Chef and Chefina will be able to talk to each other.

### Input Format
- The input consists of a single integer $X$, denoting Chef's seat number. Chefina's seat number is hence $X+1$.
### Output Format

Output the answer: `Yes` if it's possible for Chef and Chefina to talk to each other during the journey, and `No` otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e. the strings `NO`, `No`, `nO`, and `no` will all be considered equivalent.

### Constraints
- $1 \le X \le 99$
### Sample 1:
Input
Output

```
4

```

```
Yes
```

### Explanation:

Chef is sitting in seat $4$ and Chefina is sitting in seat $5$. Both seats are in the first row, so the two can talk to each other.

### Sample 2:
Input
Output

```
10

```

```
No
```

### Explanation:

Chef is sitting in seat $10$ and Chefina in seat $11$.
Chef's seat is in the second row but Chefina's seat is in the third row, so they won't be able to talk to each other.

### Sample 3:
Input
Output

```
21
```

```
Yes
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T16:43:39.637Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X;
	cin>>X;
	if (X%5==0) {
	    cout<<"No";
	} else {
	    cout<<"Yes";
	}
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/SAMESIT)