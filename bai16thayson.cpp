#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
/*
const long long N = 1e10;
long long d[N]={0};
*/
using namespace std;
int ktra(int n ) {
		if (n<2) return 0;
		for ( int i = 2; i<=sqrt(n); i++) {
			if ( n%i==0 ) return 0;
		}
	return 1;
}
int power ( int a, int b ) {
	int ans = a;
	for ( int i =1; i<b; i++) {
		ans *= 10;
	} 
	return ans;
}

int giam( int n ) {
	while ( n>9 ) {
		int check = n%10;
		n/=10;
		if ( check >= n%10 ) return 0;
	}
	return 1;
}

int tang( int n ) {
	while ( n>9 ) {
		int check = n%10;
		n/=10;
		if ( check <= n%10 ) return 0;
	}
	return 1;
}

main ()
{	
	/*
	for ( long long i=2; i<N; i++) {
		if ( d[i]==0 ) {
			d[i]=1;
			for ( int j=2*i; j<N; j+=i) {
				d[j]=-1;
			}
		}
	}
	*/
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int dem = 0;
		for ( int i=power(10,n-1); i<power(10,n); i++ ) {
			if ( tang(i) || giam(i) ) {
				if ( ktra(i) ) dem++ ;
			}
		}
		cout << dem << endl;
	} 
}

// code by Manh.


