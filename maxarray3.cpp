#include <iostream>
#include <cmath>
#include <algorithm>
//#include <cstring>
using namespace std;

int ktra( int n ) {
	if ( n < 2 ) return 0;
	if ( n==2 || n==3 ) return 1;
	for ( int i = 2; i<=sqrt(n); i++) {
		if ( n%i==0 ) return 0;
	}
	return 1;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n,*a;
		cin >> n;
		a = new int[n];
		for ( int i = 1; i<=n; i++) {
			cin >> a[i];
		}
		int dem = 0, ans = 0;
		for ( int i = 1; i<=n; i++) {
			if ( ktra(a[i]) ) dem++;
			else dem = 0;
			ans = max ( ans, dem );
		}
		cout << ans << endl;
		delete a;
	}

}

// code by Manh.


