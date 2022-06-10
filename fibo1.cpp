#include <iostream>
using namespace std;
typedef long long int ll;
const int M = 1e9 + 7;
main()
{
	int a[1005];
	a[0] = 0;
	a[1] = 1;
	for ( int i = 2; i <= 1005; i++) {
		a[i] = (a[i-1] + a[i-2] )%M;
	}
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
}

// code by Manh.

