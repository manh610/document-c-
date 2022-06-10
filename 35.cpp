#include <bits/stdc++.h>
using namespace std;

int n, a[100005];

void input() {
	cin >> n;
	for ( int i = 0; i < n; i++) cin >> a[i];
}

void solve() {
	if ( n<=1 ) {
		cout << "0" << endl;
		return;
	}
	int gcd = a[1] - a[0];
	gcd = fabs(gcd);
	for ( int i = 2; i < n; i++) {
		int z = fabs(a[i] - a[i-1]);
		gcd = __gcd(gcd,z);
	}
	int ans = 0;
	for ( int i = 1; i*i <= gcd; i++) {
		if ( gcd%i==0 ) {
			ans++;
			if ( gcd/i!=i) ans++;
		}
	}
	cout << ans << endl;
}

main() {
	int test;
	cin >> test;
	while ( test-- ) {
		input();
		solve();
	}
}
