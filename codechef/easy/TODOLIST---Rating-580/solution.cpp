#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int count=0;
	while(t--) {
	    int N;
	    int arr[N];
	    for (int i=0; i < N; i ++) {
	        cin>>arr[i];
	    }
	    for (int i=0; i < N; i ++) {
	        if (arr[i]>1000) {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}

}
