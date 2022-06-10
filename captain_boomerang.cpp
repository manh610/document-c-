#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[5001], b[5001];
	for ( int i = 1; i <= n; i++ ) b[i] = 0;
	for ( int i = 1; i <= n; i++ ) {
		cin >> a[i];
		b[a[i]] = 1;
	}
	int dem = 0;
	for ( int i = 1; i <= n; i++ ) {
		if ( b[i]==0 ) dem++; 
	}
	cout << dem;
}

// code by Manh.


