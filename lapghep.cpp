#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;
int main ()
{
	int n; 
	char a[55][55];
	cin >> n;
	for ( int i=1; i<=n; i++) {
		for ( int j=1; j<=n; j++) {
			cin >> a[i][j];
		}
	}
	int check = 0;
	for ( int i = 1; i<=n; i++) {
		for ( int j = 1; j<=n; j++) {
			if ( a[i][j] == '.' ) {
				if ( a[i+1][j]!='.' || a[i+2][j]!='.' || a[i+1][j-1]!='.' || a[i+1][j+1]!='.' ) {
					cout << "NO";
					check = 1;
					return 0;
				}
				else {
					a[i+1][j] = 1;
					a[i+2][j] = 1; 
					a[i+1][j-1] = 1; 
					a[i+1][j+1] = 1;
				}
			}
		}
	}
	if ( !check ) cout << "YES";
	return 0;
}

// code by Manh.


