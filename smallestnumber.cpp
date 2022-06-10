#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

ll solve(ll x, ll y, ll z, int n) {
	long long tmp = ( x * y )/__gcd(x,y);
	long long ans = ( z * tmp)/__gcd(z,tmp);
	long long s = pow(10, n-1);
	long long du = s % ans;
	if ( !du ) return s;
	s += ( ans - du );
	if ( s < pow(10,n) ) return s;
	else return 0; 
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		ll x, y, z;
		int n;
		cin >> x >> y >> z >> n;
		if ( solve(x,y,z,n ) ) cout << solve(x,y,z,n) << endl;
		else cout << "-1" << endl; 
	}

}

// code by Manh.


