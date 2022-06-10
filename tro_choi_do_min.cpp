#include <iostream>
using namespace std;
main ()
{
	int n,m;
	while ( 1 ) {
		cin >> n >> m;
		if ( n==0 && m==0 ) break;
		char a[n+5][m+5] = { '0' };
		for ( int i = 1; i<=n; i++) {
			for ( int j = 1; j<=m; j++) {
				cin >> a[i][j];
			}
		}
		for ( int i = 1; i<=n; i++) {
			for ( int j = 1; j<=m; j++) {
				int dem = 0;
				if ( a[i][j]=='.' ) {
					if ( a[i-1][j-1]=='*' ) dem++;
					if ( a[i-1][j]=='*') dem++;
					if ( a[i-1][j+1]=='*') dem++;
					if ( a[i][j+1]=='*') dem++;
					if ( a[i][j-1]=='*') dem++;
					if ( a[i+1][j-1]=='*') dem++;
					if ( a[i+1][j]=='*') dem++;
					if ( a[i+1][j+1]=='*') dem++;
					cout << dem;
				}
				else cout << "*";
			}
			cout << endl;
		}
		
		
	}

}

// code by Manh.


