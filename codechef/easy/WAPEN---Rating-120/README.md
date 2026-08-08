# WAPEN - Rating 120

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Time Penalty

 ***Unlike a usual CodeChef Starters contest, Starters 173 has a time penalty for every wrong submission.** *

You are participating in CodeChef Starters 173, which has a time penalty of $10$ minutes for every incorrect submission you make.
That is, the total penalty for a problem equals the number of minutes from the start of the contest till your submission receives the AC verdict, plus $10$ minutes for every incorrect submission made before that.

You solved a problem $X$ minutes after the start of the contest, and made $Y$ incorrect submissions while doing so.
What's the total time penalty for this problem?

### Input Format
- The first and only line of input will contain two space-separated integers $X$ and $Y$ — the number of minutes after which you solved the problem, and the number of wrong submissions you made.
### Output Format

Output a single integer: the total time penalty for the problem.

### Constraints
- $1 \leq X \leq 150$
- $0 \leq Y \leq 10$
### Sample 1:
Input
Output

```
3 2

```

```
23
```

### Explanation:

The problem was solved $3$ minutes after the start of the contest, with $2$ incorrect submissions.
Since each incorrect submission adds $10$ minutes to the penalty, the total penalty equals $3 + 2\times 10 = 23$.

### Sample 2:
Input
Output

```
58 0

```

```
58
```

### Explanation:

The problem was solved $58$ minutes after the start of the contest, with $0$ incorrect submissions.
So, the total time penalty is just $58$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T17:07:56.830Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B;
	cin>>A>>B;
	cout<<A+(B*10);
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/WAPEN)