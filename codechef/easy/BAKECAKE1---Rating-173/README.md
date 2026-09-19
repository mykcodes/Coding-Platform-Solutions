# BAKECAKE1 - Rating 173

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Chef Bakes Cake 1

Chef is an expert baker. Each cake costs him $30$ coins to make, and then he sells each for $50$ coins.

Today, Chef made a total of $N$ cakes and was able to sell $M$ cakes. The remaining cakes went unsold and were wasted.

Find out how much money (in coins) Chef made from these cakes. It may be possible that the answer is negative to indicate Chef lost money.

### Input Format
- The only line of input contains $2$ integers - $N$ and $M$.
### Output Format

For each test case, output on a new line the amount of money Chef made.

### Constraints
- $1 \le M \le N \le 10$
### Sample 1:
Input
Output

```
3 3

```

```
60
```

### Explanation:

Chef made $3$ cakes and sold all $3$ of them. His profit on each of the cakes was $20$ coins, and hence he made a total of $60$ coins.

### Sample 2:
Input
Output

```
3 1

```

```
-40
```

### Explanation:

Chef had made $3$ cakes, costing him $90$ coins, but only $1$ of them was sold which got him back $50$ coins. Hence, he lost $90 - 50 = 40$ coins.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T16:50:25.238Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
	cin>>N>>M;
	cout<<(M*50)-(N*30);
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/BAKECAKE1)