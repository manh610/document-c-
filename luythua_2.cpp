#include <iostream>
using namespace std;

long long power(long long n, long long m, long long k) {
	if ( m==0 ) return 1;
	long long x = power(n,m/2,k);
	if ( m%2==0 ) return (x*(x%k))%k;
	else return  (n*((x*(x%k))%k))%k;
}

main ()
{
	int test;
	cin >> test;
	long long n,m,k;
	while ( test-- ) {
		cin >> n >> m >> k;
		cout << power(n,m,k) << endl;
	}


}

// code by Manh.


