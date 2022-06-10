#include <iostream>
using namespace std;
typedef long long int ll;

ll power(ll a, ll b, ll c) {
	if ( b==0 ) return 0;
	ll x = power(a,b/2,c);
	if ( b%2==0 ) return (2*(x%c))%c;
	return (a%c+(2*(x%c))%c)%c;
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		ll a,b,c;
		cin >> a >> b >> c;
		cout << power(a,b,c) << endl;
	}
}

// code by Manh.

