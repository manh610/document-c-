#include <iostream>
using namespace std;

int chuaxet[100] = {1}, a[20][20], x[20],MIN,  n;

void Init() {
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		for ( int j = 1; j<=n; j++) {
			cin >> a[i][j];
		}
	}
}

void ktra() {
	long long chiphi = 0;
	for ( int i = 2; i<=n; i++) {
		chiphi += a[x[i-1]][x[i]];
	}
	chiphi += a[x[1]][x[n]];
	if ( chiphi < MIN ) MIN = chiphi;
}

void Try(int i ) {
	for ( int j = 2; j<=n; j++) {
		if ( chuaxet[j] ) {
			chuaxet[j] = 0;
			x[i] = j;
			if ( i==n ) ktra();
			else Try(i+1);
			chuaxet[j] = 1;
		}
	}
}

main ()
{
	MIN = 1;
	x[1] = 1;
	Init();
	Try(2);
	for ( int i = 0; i < n; i++) cout << x[i];
	cout << MIN;
}

// code by Manh.


