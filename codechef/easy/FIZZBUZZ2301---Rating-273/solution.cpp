#include <bits/stdc++.h>
using namespace std;

int main() {
	 int A,B,C;
	 cin>>A>>B>>C;
	 int Z = max(A, B, C);
	 if (A==Z) {
	    cout<<"Yes";
	 } else {
	     cout<<"No";
	 }
	 return 0;

}
