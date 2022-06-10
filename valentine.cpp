#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
main ()
{
	int n,b,a[105];
	cin >> n >> b;
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
	}
	for ( int i = b; i<=n; i+=b ) {
		a[i] = 0;
	}
	int e = 0, s = 0;
	for ( int i = 1; i<=n; i++ ) {
		if ( a[i]==1 ) s++;
		if ( a[i]== -1) e++;
	}
	cout << abs(e-s);
}

// code by Manh.


