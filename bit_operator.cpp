#include <iostream>
using namespace std;
main ()
{
	int n;
	int x = 0;
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		char a[4];
		for ( int j = 1; j<=3; j++) {
			cin >> a[j];
		}
		if ( a[2]=='+' ) x++;
		else x--;
	}
	cout << x;
}

// code by Manh.


