#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+5];
		for ( int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int t = *max_element(a, a+n);
		if ( t<0 ) cout << t << endl;
		else {
			ll ans = 0, s = 0;
			for ( int i = 0; i < n; i++) {
				s += a[i];
				if ( s < 0 ) s = 0;
				ans = max ( ans, s);
			}
			cout << ans << endl;
		}
	}
}

// code by Manh.

