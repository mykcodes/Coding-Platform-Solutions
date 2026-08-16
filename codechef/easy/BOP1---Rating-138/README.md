# BOP1 - Rating 138

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Balloon Splash

Alice and Bob are playing a balloon splash game.

Alice has $X$ water balloons and Bob has $Y$ water balloons.

The player with  **more**  balloons wins. If both players have the  **same**  number of balloons, the result is a draw.

Output:

- Alice if Alice wins
- Bob if Bob wins
- Draw if it is a draw
### Input Format
- The first line contains two space-separated integers $X$ and $Y$.
### Output Format

Output a single string denoting the result of game:

- Alice if Alice wins
- Bob if Bob wins
- Draw if it is a draw

Each character can be printed in either uppercase or lowercase, i.e. if the winner is Bob, the outputs `BOB`, `Bob`, `bOb`, and so on will all be accepted.

### Constraints
- $1 \le X, Y \le 100$
### Sample 1:
Input
Output

```
7 10

```

```
Bob

```

### Explanation:

Since Bob has more number of water balloons that Alice, Bob wins.

### Sample 2:
Input
Output

```
49 49
```

```
Draw

```

### Explanation:

Since Alice and Bob both have equal number of water balloons, the game is draw.

### Sample 3:
Input
Output

```
2 1
```

```
Alice

```

### Explanation:

Since Alice has more number of water balloons that Bob, Alice wins.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T17:01:38.398Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,Y;
	cin>>X>>Y;
	if (X>Y) {
	    cout<<"Alice";
	} else if (Y>X) {
	    cout<<"Bob";
	} else {
	    cout<<"Draw";
	}
	return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BOP1)