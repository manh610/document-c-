#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long int ll;

void solve() {
	ll x, y, z, n;
	cin >> x >> y >> z >> n;
	ll tmp = x*y/__gcd(x,y);
	ll ans = tmp*z/__gcd(z, tmp);
	ll s = pow(10, n-1);
	ll du = s % ans;
	if ( !du ) 
		cout << s;
	else {
		s += ( ans - du);
		if ( s < pow(10,n) ) cout << s;
		else cout << "-1";
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

