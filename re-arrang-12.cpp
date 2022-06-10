#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		ll n, a[200];
		cin >> n;
		for ( int i = 0; i < n; i++) {
			cin >> a[i];
		}
		ll ans = a[0];
		for ( int i = 0; i < n-1; i++) {
			ans = max (ans, a[i]);
			ll s = a[i];
			for ( int j = i+1; j < n; j++) {
				s *= a[j];
				ans = max ( ans, s);
			}
		}
		cout << ans << endl;
	}
}

// code by Manh.

