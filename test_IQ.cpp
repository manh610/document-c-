#include <iostream>
#include <cstring>
using namespace std;

char a[5][5];

void Init(){
	for ( int i = 1; i<=4; i++) {
		for ( int j = 1; j<=4; j++) {
			cin >> a[i][j];
		}
	}
}

void xuli(){
	int check = 0;
	for ( int i = 1; i<4; i++) {
		for ( int j = 1; j<4; j++) {
			if ( a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j] && a[i][j]==a[i+1][j+1] ) {
				cout << "YES";
				check = 1;
				break;
			}
			if ( a[i][j]!=a[i][j+1] && a[i][j]!=a[i+1][j] && a[i][j]!=a[i+1][j+1] ) {
				cout << "YES";
				check = 1;
				break;
			}
		}
		if(check) break;
	}
	if ( !check ) cout << "NO";
}

main ()
{
	Init();
	xuli();
}

// code by Manh.


