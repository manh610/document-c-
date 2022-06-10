#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

void solve() {
	ll a, x, y;
	cin >> a >> x >> y;
	ll tmp = __gcd(x,y);
	for ( ll i = 1; i <= tmp; i++) {
		cout << a;
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

