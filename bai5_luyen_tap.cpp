#include <iostream>
using namespace std;
typedef long long int ll;

void solve() {
	int n, k;
	cin >> n >> k;
	int dem = 0, check = 1, ok = 0;
	for ( int i = 2; i<=n; i++) {
		if ( n%i==0 ) {
			while ( n%i==0 ) {
				dem++;
				if ( dem==k ) {
					check = 0;
					cout << i;
					break;
				}
				n/=i;
			}
		}
		if ( !check ) {
			ok = 1;
			break;
		} 
	}
	if ( !ok ) cout << "-1";
	cout << endl;
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
	}
}

// code by Manh.

