# NEWSPAPER - Rating 272

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Sports Section

The newspaper in Chefland consists of $10$ pages numbered $1$ to $10$.
The last $3$ pages of the newspaper are always dedicated to the  **sports section**.

Given a random page number $X$, determine whether that page is dedicated to the sports section.

### Input Format
- The first and only line of input consists of a single integer $X$, denoting the page number.
### Output Format

Output on a new line, `YES`, if the given page number is dedicated to the sports section, and `NO` otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq X \leq 10$
### Sample 1:
Input
Output

```
3
```

```
NO
```

### Explanation:

Page number $3$ is not dedicated to the sports section.

### Sample 2:
Input
Output

```
8
```

```
YES
```

### Explanation:

Since page number $8$ is one of the last three pages, it is dedicated to the sports section.

### Sample 3:
Input
Output

```
10
```

```
YES
```

### Explanation:

Since page number $10$ is one of the last three pages, it is dedicated to the sports section.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T14:29:27.092Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	if (n>7) {
	    cout<<"Yes";
	} else {
	    cout<<"No";
	}
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/NEWSPAPER)