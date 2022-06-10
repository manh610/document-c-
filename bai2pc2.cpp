#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	long long F[93];
	F[1] = F[2] = 1;
	for ( int i = 3; i<=92; i++) {
		F[i] = F[i-1] + F[i-2];
	}
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		cout << F[n] << endl;
	}
}

// code by Manh.


