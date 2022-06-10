#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;
main ()
{
	int n,m,a[5005];
	cin >> n >> m;
	for ( int i=1; i<=n; i++) {
		cin >> a[i];
	}
	int dem = 0;
	for ( int i = 1; i<n; i++) {
		for ( int j = i+1; j<=n; j++) {
			if ( a[i] + a[j] == m ) dem++;
		}
	}
	cout << dem ;
}

// code by Manh.


