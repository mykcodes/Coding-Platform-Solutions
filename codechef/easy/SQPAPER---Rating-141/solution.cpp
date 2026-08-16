#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    if (A<B) {
        cout<<A*A;
    } else if (B<A) {
        cout<<B*B;
    } else {
        cout<<A*A;
    }
    return 0;
}
