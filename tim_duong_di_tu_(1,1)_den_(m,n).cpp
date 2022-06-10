#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int a[100][100],m,n,x[200];

void ktra() {
	bool ok = true;
	int h = 1, c = 1;
	for ( int i = 1; i<=m+n-2; i++) {
		if ( x[i] ) c++;
		else h++;
		if ( a[h][c]==0 || h>m || c>n ) {
			ok = false;
			break;
		}
	}
	if ( ok ) {
		for ( int i = 1; i<=m+n-2; i++) {
			if ( x[i]==1 ) cout << "R";
			else cout << "D";
		}
		cout << endl;
	}
}

void Try(int i ) {
	for ( int j = 0; j<=1; j++) {
		x[i] = j;
		if ( i == m+n-2 ) ktra();
		else Try(i+1);
	}
}

main ()
{
	cin >> m >> n;
	for ( int i = 1; i<=m; i++) {
		for ( int j = 1; j<=n; j++) {
			cin >> a[i][j];
		}
	}
	Try(1);
}

// code by Manh.


