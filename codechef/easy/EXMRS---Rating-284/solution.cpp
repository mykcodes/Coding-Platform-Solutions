#include <bits/stdc++.h>
using namespace std;

int main() {
	int c,m,w,p,r;
	cin>>c>>m>>w>>p>>r;
	int a = c*m - w*p;
	if (a>r) {
	    cout<<"Yes\n";
	} else { cout<<"No\n";}
}
