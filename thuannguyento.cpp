#include <iostream>
#include <cmath>
using namespace std;

int ktra(int n) {
	if ( n==0 || n==1 ) return 0;
	else if( n==2 || n==3) return 1;
	else {
		for ( int i=2; i<=sqrt(n); i++) {
			if ( n%i==0 ) return 0;
		}
	}
	return 1;
}

int thuan( int n ) {
	int tmp=0;
	while ( n ) {
		int x = n%10;
		if ( ktra(x)==0 ) return 0;
		n/=10;
		tmp+=x;
	}
	if ( ktra(tmp)==0 ) return 0;
	return 1;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		long long a,b,dem = 0;
		cin >> a >> b;
		for ( int i=a; i<=b; i++) {
			if( ktra(i)==1 && thuan(i)==1 ) dem++;
		}
		cout << dem << endl;
	}
}

// code by Manh.

