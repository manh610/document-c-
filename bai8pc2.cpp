#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[n+2];
	for ( int i = 0; i<n ; i++) {
		cin >> a[i];
	}
	for ( int i=0; i<n; i++) {
		int check = 0;
		for ( int j = 0; j<n-1; j++) {
			if ( a[j+1] < a[j] ) {
				swap (a[j+1],a[j]);
				check = 1;
			}
		}
		if ( !check ) break;
		cout << "Buoc " << i+1 << ": ";
		for ( int j = 0; j<n; j++ ) cout << a[j] << " ";
		cout << endl;	
	}

}

// code by Manh.


