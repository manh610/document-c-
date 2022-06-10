#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[n+1];
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
	}
	int dem = 0;
	for ( int i = 1; i<n; i++ ) {
		if ( a[i] != a[i+1] ) dem++;
	}
	cout << dem+1;
}

// code by Manh.


