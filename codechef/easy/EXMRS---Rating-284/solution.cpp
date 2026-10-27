#include <bits/stdc++.h>
using namespace std;

int main() {
	int c,w,m,p,r;
	cin>>c>>w>>m>>p>>r;
	int a = c*m - w*p;
	if (a>r) {
	    cout<<"Yes\n";
	} else { cout<<"No\n";}
}
