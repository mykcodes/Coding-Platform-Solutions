#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	string S;
	cin>>S;
	if (!S.empty()) {
	    char first=S.front();
	    char last=S.back();
	    if (first=='c' || last=='f') {
	        cout<<"Yes";
	    } else {
	        cout<<"No";
	    }
	} else {
	    cout<<"Invalid String";
	}
	return 0;
	
}
