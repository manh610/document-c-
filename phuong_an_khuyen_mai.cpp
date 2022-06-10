#include <iostream>
using namespace std;
int n,m,k;

int so_0(int n) {
	while ( n>0 ) {
		int du = n%10;
		if ( du==0 ) return 0;
		n/=10;
	}	
	return 1;
}

int thuan_nghich(int n) {
	int a = n, x = 0;
	while ( a>0 ) {
		int du = a%10;
		x = x*10 +du;
		a/=10;
	}
	if ( x==n ) return 1;
	else return 0;
}

int so_0_dau(int n) {
	while ( n>=10 ) {
		n/=10;
	} 
	if ( n!=0 ) return 1;
	return 0;
}

int tong_chuso(int n) {
	int s = 0;
	while ( n>0 ) {
		s += n%10;
		n/=10;
	}
	if ( s%10==0 ) return 1;
	return 0;
}



void solve() {
	int d1 = 0, d2 = 0, d3 = 0;
	for ( int i = 100000; i<=999999; i++) {
		if ( so_0_dau(i)!=0 ) {
			if ( thuan_nghich(i) ) d3++;
			if ( thuan_nghich(i) && tong_chuso(i) ) d2++;
			if ( thuan_nghich(i) && tong_chuso(i) && so_0(i) ) d1++;
		}
	}
	if ( n<=d1 && m<=d2-n && k<=d3-m-n ) cout << "YES" << endl;
	else cout << "NO" << endl;
}

main ()
{
	int test;
	while ( test-- ) {
		cin >> n >> m >> k;
		solve();
	}

}

// code by Manh.


