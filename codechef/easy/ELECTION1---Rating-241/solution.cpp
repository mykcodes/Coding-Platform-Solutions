#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,K;
	cin>>N>>K;
	if (K> ((N/2)+1)) {
	    cout<<K-((N/2)+1);
	} else {
	    cout<<"0";
	}
    return 0;
}
