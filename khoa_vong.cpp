#include <iostream>
#include <cmath>
using namespace std;
main ()
{
	int n;
	cin >> n;
	char a[n+1],b[n+1];
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for ( int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	int dem = 0;
	for ( int i = 1; i <= n; i++) {
		if ( a[i] != b[i] ) {
			int tmp = abs ( a[i] - b[i] );
			if ( tmp < 5 ) dem += tmp;
			else dem += (10 - tmp); 
		} 
	}
	cout << dem;
}

// code by Manh.


