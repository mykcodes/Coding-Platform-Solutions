# Highest Value Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Palindromes are strings that read the same from the left or right, for example <em>madam</em> or <em>0110</em>.  
  
You will be given a string representation of a number and a maximum number of changes you can make.  Alter the string, one digit at a time, to create the string representation of the largest number possible given the limit to the number of changes.  The length of the string may not be altered, so you must consider $0$'s left of all higher digits in your tests.  For example $0110$ is valid, $0011$ is not.  

Given a string representing the starting number, and a maximum number of changes allowed, create the largest palindromic string of digits possible or the string '-1' if it is not possible to create a palindrome under the contstraints.  

**Example**  
$s = \text{'1231'}$  
$k = 3$  

Make $3$ replacements to get $\text{'9339'}$.  

$s = \text{'12321'}$  
$k = 1$  

Make $1$ replacement to get $\text{'12921'}$.  

**Function Description**  

Complete the *highestValuePalindrome* function in the editor below.     

highestValuePalindrome has the following parameter(s):  

- *string s:* a string representation of an integer    
- *int n:* the length of the integer string  
- *int k:* the maximum number of changes allowed  

**Returns**  

- *string:* a string representation of the highest value achievable or `-1`  

**Input Format**

The first line contains two space-separated integers, $n$ and $k$, the number of digits in the number and the maximum number of changes allowed.	
The second line contains an $n$-digit string of numbers.  

**Constraints**

* $0 \lt n \le 10^5$
* $0 \le k \le 10^5$
* Each character $i$ in the number is an integer where $0 \le i \le 9$.

**Output Format**

**Sample Input 0**
	
	STDIN	Function
    -----	--------
	4 1		n = 4, k = 1
	3943	s = '3943'
    
**Sample Output 0**
    
	3993
    

**Sample Input 1**

	6 3
	092282
    
**Sample Output 1**
    
	992299
    
**Sample Input 2**

	4 1
    0011
    
**Sample Output 2**
    
	-1

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T15:25:41.770Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'highestValuePalindrome' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER n
 *  3. INTEGER k
 */

string highestValuePalindrome(string s, int n, int k) {
    int left=0;
    int right=n-1;
    vector<bool> changed(n, false);
    while (left< right) {
        if (s[left]!= s[right]) {
            if (s[left]> s[right]) {
                s[right]= s[left];
                changed[right] = true;
            } else {
                s[left]= s[right];
                changed[left]= true;
            }
            k--;
        }
        left++;
        right--;
    }
    if (k < 0) {
        return "-1";
    }
    left = 0;
    right = n-1;
    while (left<= right) {
        if (left==right) {
            if (k > 0&& s[left] !='9') {
                s[left]= '9';
                k--;
            }
        } 
        else if (s[left]!= '9') {
            if (changed[left]|| changed[right]) {
                if (k >= 1) {
                    s[left] ='9';
                    s[right]='9';
                    k -= 1;
                }
            } 
            else {
                if (k >= 2) {
                    s[left] ='9';
                    s[right]= '9';
                    k -= 2;
                }
            }
        }
        left++;
        right--;
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string s;
    getline(cin, s);

    string result = highestValuePalindrome(s, n, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/richie-rich/problem)