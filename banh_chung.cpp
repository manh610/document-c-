#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		for ( int j = 1; j<=n; j++) {
			if ( i==j || i==1 || j==1 || i==n || j==n || i + j ==n+1 || i == n/2+1 || j==n/2+1) {
				cout << "* ";
			}
			else cout << "  ";
		}
		cout << endl;
	}

}

// code by Manh.


