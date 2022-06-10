#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
const ll M = 1e9+7;
ll n,a[10005];

ll power(ll a, ll b) {
	if ( b==0 ) return 1;
	else {
		ll t = power(a,b/2);
		t = t * t % M;
		if ( b%2 ) return t * a % M;
		return t;
	} 
}

void init() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}

void solve() {
	ll h, g;
	h = a[1];
	g = a[1];
	for ( int i = 2; i <= n; i++) {
		h *= a[i];
		g = __gcd(g, a[i]);
	}
	cout << power(h,g);
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		init();
		solve();
	}
}

// code by Manh.

