#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+3];
		for ( int i=1; i<=n; i++) {
			cin >> a[i];
		}
		int check;
		for ( int i=1; i<=(n/2+1); i++) {
			if ( a[i]==a[n-i+1] ) check=1;
			else {
				check = 0;
				break;
			}
		}
		if ( check==1 ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}

// code by Manh.


