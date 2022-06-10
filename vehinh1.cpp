#include <iostream>
using namespace std;
typedef long long int ll;
main ()
{
	int n;
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		for ( int j = 1; j <= n*2-1; j++) {
			if ( j >= i && j-i<n ) {
				cout << "*";
			}
			else cout << " ";
		}
		cout << endl;
	}

}

// code by Manh.


