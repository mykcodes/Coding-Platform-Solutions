#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,A,M,B;
    cin>>N>>A>>M>>B;
    if (N*A < M*B) {
        cout<<M*B - N*A;
    } else { cout<< N*A - M*B; }
    return 0;

}