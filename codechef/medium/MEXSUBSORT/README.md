# MEXSUBSORT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mex Sort

 *As always, Hyder seeks Order in Chaos. He thinks a sorted permutation is the only way to achieve order. Help him out!* 

You are given $P$, a permutation of $\{0, \ldots, N-1\}$.
This means $P$ is an array of length $N$ containing every integer from $0$ to $N-1$ in some order.

 **$P$ is zero-indexed, i.e $P = [P_0, \ldots, P_{N-1}]$.** 

You are allowed to perform the following operation at most $\lceil\log_2 N \rceil$ times:

- Choose a subsequence of distinct indices $i_1, i_2, \ldots, i_K$ such that there exists no subarray of the current permutation $P$ whose MEX is equal to the MEX of the set of values $P_{i_1}, P_{i_2}, \ldots, P_{i_K}$. The MEX of a set of non-negative integers is the smallest non-negative integer that does not belong to the set.
- Rearrange the values at the chosen indices as you wish. This is a permanent change.

Your task is to sort $P$ in ascending order.
Note that you do not need to minimize the number of operations used - you only need to use no more than $\lceil\log_2 N \rceil$ of them.

If it is impossible to sort $P$ using at most $\lceil\log_2 N \rceil$ operations of this type, print $-1$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, denoting the size of the permutation. The second line contains $N$ space-separated integers $P_0, P_1, \ldots, P_{N-1}$, representing the permutation.
### Output Format

For each test case:

- If it is impossible to sort $P$ using at most $\lceil\log_2 N \rceil$ operations, output $-1$ on a new line.
- Otherwise, output on a new line the number of operations $M$ ($0 \le M \le \lceil\log_2 N \rceil$) to be performed, followed by $3M$ lines describing the operations. For each operation, output the following three lines: The first line should contain an integer $K$ ($1 \le K \le N$), the size of the chosen subsequence. The second line should contain $K$ distinct indices chosen for this operation - $i_1, \ldots, i_K$ The third line should contain $K$ distinct values $x_1, \ldots, x_K$. These values should be a permutation of the values at indices $i_1, \ldots, i_K$ before the operation, and mean that the value $x_j$ is to be placed at index $i_j$ by the operation; for each $1 \le j \le K$.
### Constraints
- $1 \le T \le 10^4$
- $6 \le N \le 5\cdot 10^4$
- $P$ is a permutation of the integers from $0$ to $N-1$.
- The sum of $N$ over all test cases does not exceed $5\cdot 10^4$.
### Sample 1:
Input
Output

```
4
7
2 5 0 3 4 1 6
6
1 2 3 0 5 4
7
5 4 2 1 0 3 6
6
0 1 2 3 4 5

```

```
2
4
0 2 4 5
0 4 1 2
5
0 1 2 4 5
0 1 2 4 5
3
4
0 2 3 5
4 0 3 1
3
1 2 5
0 2 1
4
0 1 4 5
0 1 4 5
-1
0

```

### Explanation:

 **Test case $1$:**  Initially $P = [2, 5, 0, 3, 4, 1, 6]$.

- Operation $1$: choose indices $[0, 2, 4, 5]$, which hold the values $\{2, 0, 4, 1\}$, and rearrange them as $[0, 4, 1, 2]$. This gives $P = [0, 5, 4, 3, 1, 2, 6]$.
- Operation $2$: choose indices $[0, 1, 2, 4, 5]$, which hold the values $\{0, 5, 4, 1, 2\}$, and rearrange them as $[0, 1, 2, 4, 5]$. This gives $P = [0, 1, 2, 3, 4, 5, 6]$, which is sorted.

 **Test case $2$:**  Initially $P = [1, 2, 3, 0, 5, 4]$. Three operations are used, after which $P$ becomes $[4, 2, 0, 3, 5, 1]$, then $[4, 0, 2, 3, 5, 1]$, and finally $[0, 1, 2, 3, 4, 5]$.

 **Test case $3$:**  It is not possible to perform any operation on $P$, and $P$ is not sorted. Hence, the answer is $-1$.

 **Test case $4$:**  $P$ is already sorted, so no operations are needed.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T16:26:49.805Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/MEXSUBSORT)