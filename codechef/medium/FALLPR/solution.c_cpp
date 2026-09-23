#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
	cin>>n;
	long long sum =0, min_val = 1e9;
	bool deleted = false;
	for (int i =0; i<n; i++) {
	    long long val; cin>>val; sum+=val;
	    min_val = min(min_val, val);
	    if (sum<0) {
	        if (deleted) {
	            cout<<"No\n";
	            return;
	        }
	        sum -= min_val;
	        deleted = true;
	    }
	}
	cout<<"Yes\n";
}
int main() {
	int t;
	cin>>t;
	while(t--) {
	    solve();
	}
}
