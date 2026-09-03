#include <bits/stdc++.h>
using namespace std;

int main() {
	int R,B;
	cin>>R>>B;
	int Z=min(R, B);
	cout<<Z*5+(R-Z)*1+(B-Z)*2;
	return 0;

}
