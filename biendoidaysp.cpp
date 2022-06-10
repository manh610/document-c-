#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;

main ()
{
	int n,d;
	cin >> n >> d;
	int a[n+2];
	for ( int i = 0; i<n; i++) {
		cin >> a[i];
	}
	long long dem = 0,tmp;
	for ( int i = 1; i<n; i++) {
		if ( a[i] <= a[i-1] ) {
			tmp = ( a[i-1] - a[i] )/d + 1 ; 
			dem += tmp  ;
			a[i] += ( tmp * d );
		}
	}
	cout << dem;
}

// code by Manh.


