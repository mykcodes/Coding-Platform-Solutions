#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int N,K;
	    cin>>N>>K;
	    vector<long long> A(N);
	    long long total = 0;
	    for (auto &x : A) {
	        cin>>x;
	        total += x;
	    }
	    int len = N-K;
	    long long window = 0;
	    for (int i=0; i < len; i++) {
	        window += A[i];
	    }
	    long long minSum = window;
	    for (int i =len; i<N; i++) {
	        window += A[i]-A[i-len];
	        minSum - min(minSum, window);
	    }
	    cout<<total-minSum<<'\n';
	}
	return 0;

}
