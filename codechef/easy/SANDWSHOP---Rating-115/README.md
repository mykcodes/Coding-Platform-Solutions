# SANDWSHOP - Rating 115

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Selling Sandwiches

Chef sells sandwiches for a living. Each sandwich is sold for $A$ rupees.

Chef also needs to buy the ingredients to make a sandwich. The sandwich buns cost $B$ rupees, and the vegetables cost $C$ rupees. Let us assume that there are no other costs for Chef right now.

What is the profit Chef makes in selling one sandwich? It may be possible that the answer is negative to indicate that Chef makes a loss instead.

### Input Format
- The first and only line of input contains $3$ integers - $A, B$ and $C$.
### Output Format

For each test case, output on a new line the profit or loss Chef makes in selling one sandwich.

### Constraints
- $100 \le A \le 1000$
- $40 \le B \le 200$
- $40 \le C \le 200$
### Sample 1:
Input
Output

```
1000 200 200

```

```
600
```

### Explanation:

Chef needs $400$ rupees to buy all the ingredients, and then sells it for $1000$ rupees, so he makes a profit of $600$ rupees.

### Sample 2:
Input
Output

```
100 200 200

```

```
-300
```

### Explanation:

Chef needs $400$ rupees to buy all the ingredients, and then sells it for $100$ rupees, so he makes a loss of $300$ rupees.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T17:07:18.218Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C;
	cin>>A>>B>>C;
	cout<<A-(B+C);
	return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SANDWSHOP)