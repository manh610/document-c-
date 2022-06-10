#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	long long F[100];
	F[1] = F[2] = 1;
	for ( int i = 3; i<93; i++) {
		F[i] = F[i-1] + F[i-2];
	}
	int test;
	cin >> test;
	while ( test--) {
		int n;
		cin >> n;
		cout << F[n] << endl;
	}
}

// code by Manh.


