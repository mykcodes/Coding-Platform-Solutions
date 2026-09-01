#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,Y,Z,A,B;
    cin>>X>>Y>>Z;
    A = 2*Z+Y;
    B = 2*X+3*Y;
    if (A>B) {
        cout<<B;
    } else {
        cout<<A;
    }
    
    return 0;
}
