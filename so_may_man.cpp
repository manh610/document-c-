#include <iostream>
#include <cmath>
using namespace std;

int ktra(int n) {
	while ( n>0 ) {
		int du = n%10;
		if ( du!= 4 && du!= 7 ) return 0;
		n/=10;
	}
	return 1;
}

main ()
{
	int n,check = 1;
	cin >> n;
	for ( int i = 2; i<=n; i++) {
		if ( n%i==0 ) {
			if ( ktra(i) ) {
				check = 0;
				break;
			}
		}
	}
	if( check ) cout << "NO";
	else cout << "YES";
}

// code by Manh.


