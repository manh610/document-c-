#include <iostream>
using namespace std;
main ()
{
	int a[10];
	for ( int  i = 1; i<=8; i++) {
		cin >> a[i];
	}
	int dem1 = 0, dem2 = 0;
	for ( int i = 1; i<8; i++) {
		if ( a[i] > a[i+1]) dem1++;
		if ( a[i] < a[i+1]) dem2++;
	}
	if ( dem1==7) cout << "descending";
	else if ( dem2==7 ) cout << "ascending";
	else cout << "mixed";
}

// code by Manh.


