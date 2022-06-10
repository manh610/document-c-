#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[n+3][n+3];
	for ( int i = 1; i <= n; i++) {
		for ( int j = 1; j <= 3; j++) {
			cin >> a[i][j];
		}
	}
	int ans = 0;
	for ( int i = 1; i <= n; i++) {
		int dem = 0, check = 0;
		for ( int j = 1; j <= 3; j++) {
			if ( a[i][j] ) {
				dem++;
				if ( dem==2 ) {
					check = 1;
					break;
				}
			}
		}
		if ( check ) ans++;
	}
	cout << ans;
}

// code by Manh.


