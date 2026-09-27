# CWCTH - Rating 167

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Cloud Watching

Chef believes he can predict the weather just by looking at clouds!

Chef saw $A$ clouds in the morning, and $B$ clouds in the evening.
He believes that it will rain if the number of clouds he saw in the evening is  **at least $3$ times**  of the number of the clouds he saw in the morning.

Given the values of $A$ and $B$, what will Chef's prediction be?

### Input Format
- The only line of input contains two space-separated integers $A$ and $B$ — the number of clouds Chef saw in the morning and evening, respectively.
### Output Format

Output a single line containing the answer: `Rain` if Chef believes it will rain, and `Dry` otherwise.

Each character of the output may be printed in either uppercase or lowercase, i.e. the strings `dry`, `Dry`, `DrY`, and `dRY` are all considered equivalent.

### Constraints
- $1 \leq A, B \leq 20$
### Sample 1:
Input
Output

```
3 9
```

```
Rain
```

### Explanation:

Chef saw $3$ clouds in the morning and $9$ in the evening.
Since $9 \geq 3\times 3$, Chef believes it will rain.

### Sample 2:
Input
Output

```
4 9
```

```
Dry
```

### Explanation:

Chef saw $4$ clouds in the morning and $9$ in the evening.
Since $9 \lt 3\times 4 = 12$, Chef believes it will not rain.

### Sample 3:
Input
Output

```
15 14
```

```
Dry
```

### Explanation:

Chef saw $15$ clouds in the morning and $14$ in the evening.
Since $14 \lt 3\times 15 = 45$, Chef believes it will not rain.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-27T10:43:45.283Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B;
	cin>>A>>B;
	B>=3*A
	? cout << "Rain"
	: cout << "Dry";
	return 0; 

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CWCTH)