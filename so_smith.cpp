#include <iostream>
using namespace std;

int tong_chu_so(long long n) {
	int sum = 0;
	while ( n>0 ) {
		sum += n%10;
		n/=10;
	}
	return sum;
}

int tong_nhan_tu(long long n) {
	int sum = 0;
	for ( long long i = 2; i<=n; i++) {
		while( n%i==0 ) {
			sum += tong_chu_so(i);
			n/=i;
		}
	}
	return sum;
}

main ()
{
	long long n;
	cin >> n;
	if ( tong_chu_so(n)==tong_nhan_tu(n) ) cout << "YES";
	else cout << "NO";
}

// code by Manh.


