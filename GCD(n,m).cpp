#include <iostream>
#include <algorithm>
using namespace std;

int solve(long long n, long long m) {
	long long sum1, sum2, T;
	if ( n%2==0 ) T = (n/2)*(n+1);
	else T = ((n+1)/2)*n;
	sum1 = ( T + m ) / 2;
	sum2 = ( T - m ) / 2;
	if ( T < m ) return 0; 
	return ( __gcd(sum1,sum2)==1 ); 
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		long long n,m;
		cin >> n >> m;
		if ( solve( n,m ) ) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

}

// code by Manh.


