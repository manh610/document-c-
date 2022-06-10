#include <iostream>
#include <algorithm>
const long long MAX = 1e7;
using namespace std;

int min(int a, int b, int c) {
	return ( a<b ) ? (( a<c ) ? a : c ) : (( b<c ) ? b : c ); 
}

void solve() {
	int n,m,M;
	cin >> n >> m;
	int a[n+2][m+2],q[n+2][m+2] = {0};
	for ( int i = 1; i<=n; i++) {
		for ( int j = 1; j<=m; j++) {
			cin >> a[i][j];
			q[i][j] = a[i][j];
		}
	}
	for ( int i = 1; i<=m; i++) {
		q[0][i] = MAX;
		q[n+1][i] = MAX;
	}
	for ( int i = 1; i<=n; i++ ) {
		q[i][0] = MAX;
		q[i][m+1] = MAX;
	}
	cout << endl;
	for ( int i = 1; i<=n; i++) {
		for ( int j = 1; j<=m; j++) {
			M = min ( q[i-1][j-1] , q[i][j-1], q[i][j+1] ) ;
			q[i][j] = M + a[i][j];
			a[i][j] = q[i][j];
			cout << q[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << q[n][m] << endl;
}

main ()
{	
	int test;
	cin >> test;
	while ( test--) {
		solve();
	}
}

// code by Manh.


