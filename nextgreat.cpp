#include <iostream>
using namespace std;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+1];
		for ( int  i = 1; i<=n; i++) {
			cin >> a[i];
		}
		for ( int i = 1; i<=n; i++) {
			int check = 0;
			for ( int j = i+1; j<=n; j++) {
				if ( a[j] >= a[i] ) {
					cout << a[j] << " ";
					check = 1;
					break;
				}
			}
			if ( !check ) {
				for ( int j = i; j<=n; j++) {
					cout << "-1 "; 
				}
				break;
			}
		}
		cout << endl;
	}

}

// code by Manh.


