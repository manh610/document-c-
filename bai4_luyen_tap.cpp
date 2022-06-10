#include <iostream>
using namespace std;
typedef long long int ll;

void solve() {
	int n;
	cin >> n;
	for ( int i = 2; i <= n; i++) {
		if ( n%i==0 ) {
			int dem = 0;
			while ( n%i==0 ) {
				dem++;
				n/=i;
			}
			cout << i << " " << dem << " ";
		}
	}
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

