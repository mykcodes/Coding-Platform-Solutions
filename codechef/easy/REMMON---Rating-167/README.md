# REMMON - Rating 167

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Remaining Money

Chef had $N$ rupees with him.

He decided to buy $A$ ice creams for his friends, each at a cost of $B$ rupees. He was able to pay the entire amount.

Find how many rupees Chef still has left with him at the end?

### Input Format
- The first and only line of input contains $3$ integers - $N, A$ and $B$.
### Output Format

For each test case, output on a new line the amount of rupees Chef has left.

### Constraints
- $1 \le N \le 1000$
- $1 \le A, B \le 100$
- $A \cdot B \le N$
### Sample 1:
Input
Output

```
100 5 2

```

```
90

```

### Explanation:

Chef had $100$ rupees, and he spent $5 \cdot 2 = 10$ rupees. So, he still has $100 - 10$ rupees left over.

### Sample 2:
Input
Output

```
10 5 2

```

```
0

```

### Explanation:

Chef had $10$ rupees, and he spent the entire amount. Thus, he has $0$ rupees left.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T05:34:01.374Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,A,B;
	cin>>N>>A>>B;
	cout<<(N-(A*B))<<endl;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/REMMON)