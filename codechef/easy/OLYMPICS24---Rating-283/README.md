# OLYMPICS24 - Rating 283

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Olympics 2024

Athletes of Chefland have won $G$ gold medals, $S$ silver medals, and $B$ bronze medals in the Paris Olympics.

Chef will be happy only if the Chefland team wins $5$ medals of each type. Find the total number of additional medals the team needs to win to make Chef happy.

### Input Format
- The first and only line of input will contain three space-separated integers $G, S,$ and $B$ — the number of gold, silver, and bronze medals, respectively.
### Output Format

For each test case, output on a new line, the total number of additional medals the team needs to win to make Chef happy.

### Constraints
- $1 \leq G, S, B \leq 5$
### Sample 1:
Input
Output

```
5 1 4

```

```
5
```

### Explanation:

The team already has $5$ gold medals. They need $4$ silver medals and $1$ bronze medal. Thus, a total of $5$ medals are needed to make Chef happy.

### Sample 2:
Input
Output

```
2 1 1

```

```
11

```

### Explanation:

The team needs $3$ gold, $4$ silver, and $4$ bronze medals. Thus, they need a total of $11$ medals to make Chef happy.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-06T09:58:58.591Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	cout<<15-(x+y+z);
	return 0;
	

}

```

---

[View on CodeChef](https://www.codechef.com/problems/OLYMPICS24)