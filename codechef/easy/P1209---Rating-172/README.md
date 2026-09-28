# P1209 - Rating 172

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Bitcoin Market

Chef has recently started investing in  **Bitcoin**.
He assigns a  **market risk level**  $R$ (from $1$ to $10$), where:

- $1$ means the market is very safe,
- $10$ means the market is very risky.

Chef will  **buy Bitcoin**  only if the risk level is  **$4$ or less**.

Given the current risk level $R$, determine whether Chef should buy Bitcoin.

Print  **"YES"**  if Chef should buy, otherwise print  **"NO"**.

### Input Format
- The first and only line of input contains a single integer $R$ — the current market risk level.
### Output Format

Print `YES` if Chef should buy Bitcoin, Otherwise, print `NO`.

You may print each character of the string in uppercase or lowercase (for example, the strings `YES`, `yEs`, `yes`, and `yeS` will all be treated as identical).

### Constraints
- $1 \leq R \leq 10$
### Sample 1:
Input
Output

```
2
```

```
YES
```

### Explanation:

The current market risk is $2$.
Since $2$ is not larger than $4$, the risk is small enough, and Chef will buy Bitcoin.

### Sample 2:
Input
Output

```
4
```

```
YES
```

### Explanation:

The current market risk is $4$.
Since $4$ is not larger than $4$, the risk is small enough, and Chef will buy Bitcoin.

### Sample 3:
Input
Output

```
5
```

```
NO
```

### Explanation:

The current market risk is $5$.
Since $5$ is larger than $4$, the risk is too much, and Chef will  **not**  buy Bitcoin.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T14:28:44.278Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int R;
	cin>>R;
	(R<=4)
	? cout<<"Yes"
	: cout<<"No";
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/P1209)