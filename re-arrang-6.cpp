#include <iostream>
using namespace std;
typedef long long int ll;

void solve() {
	int n;
	cin >> n;
	int a[n+5];
	for ( int i = 0; i<n; i++) {
		cin >> a[i];
	}
	for ( int i = 0; i < n-1; i++) {
		if ( a[i+1]!=0 && a[i]==a[i+1] ) {
			a[i] = 2*a[i];
			a[i+1] = 0;
		}
	}
	int dem = 0;
	for ( int i = 0; i < n; i++ ) {
		if ( a[i]!=0 ) {
			cout << a[i] << " ";
		}
		else dem++;
	}
	for ( int i = 0; i < dem; i++) {
		cout << "0 ";
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

