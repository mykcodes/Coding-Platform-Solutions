#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    long long sum =0, m=0;
    vector<int>
    freq(n+2, 0);
    for (int i=0; i<n; i++) {
        cin>>a[i];
        sum += a[i];
        if (a[i] <= n) freq[a[i]]++;
    }
    while (freq[m]) m++;
    long long term_sum = m * (m-1)/2;
    for (int x:a) {
        if (x>m) term_sum += m+1;
    }
    cout<<((sum = term_sum) % 2 ? "Alice\n" : "Bob\n");
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
	

}
