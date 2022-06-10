#include <iostream>
using namespace std;

long long gcd(long long x, long long y ) {
	if ( y==0 ) return x;
	else return gcd( y,x%y);
}
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		long long a,x,y;
		cin >> a >> x >> y;
		long long tmp = gcd(x,y);
		for ( long long i = 1; i<=tmp; i++) {
			cout << a;
		}
		cout << endl;
	}

}

// code by Manh.


