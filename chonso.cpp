#include <iostream>
#include <cmath>
using namespace std;

int ktra(long long n) {
	int x = sqrt(n);
	if ( x == sqrt(n) ) return 1;
	return 0;
}

main ()
{
	long long n;
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		if ( n%i==0 ) {
			long long x = n/i;
			if (ktra(x)==0 ) {
				cout << x;
				break;
			}
		} 
	}

}

// code by Manh.


