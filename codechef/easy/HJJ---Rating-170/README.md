# HJJ - Rating 170

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Can You Bench

Chef goes to the gym daily and follow a progressive bench press routine. In the $1^{st}$ set, Chef will lift $X$ kilograms. For each subsequent set, you increase the weight by $10$ kilograms.

Your task is to calculate the amount of weight Chef will bench in the $3^{rd}$ set.

### Input Format

The input consists of a single integer $X$, the weight (in kilograms) Chef benches in the $1^{st}$ set.

### Output Format

Output a single integer — the weight (in kilograms) Chef will bench in the $3^{rd}$ set.

### Constraints

$1 \leq X \leq 100$

### Sample 1:
Input
Output

```
10

```

```
30
```

### Explanation:

In the $1^{st}$ set Chef benches 10 kg, in the next it becomes 20 kg and in the $3^{rd}$ it becomes 30 kg

### Sample 2:
Input
Output

```
20

```

```
40
```

### Explanation:

In the $1^{st}$ set Chef benches 20 kg, in the next it becomes 30 kg and in the $3^{rd}$ it becomes 40 kg

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-11T05:34:21.840Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X;
	cin>>X;
	cout<<X+10+10;
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/HJJ)