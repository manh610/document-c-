#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;

int ktra(int n ) {
	if ( n < 2 ) return 0;
	else {
		for ( int i = 2; i <= sqrt(n); i++ ) {
			if ( n%i==0 ) return 0;
		}
		return 1;
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int a, b, dem = 0;
		cin >> a >> b;
		for ( int i = a; i <= b; i++ ) {
			if ( ktra(i) ) dem++;
		}
		cout << dem << endl;
	}

}

// code by Manh.


