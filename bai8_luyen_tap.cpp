#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(ll a, ll b, ll M) {
	if ( b==0 ) return 1;
	ll x = power(a, b/2, M);
	x = (x*(x%M))%M;
	if ( b%2 ) return (x*(a%M));
	return x;
}

ll reduce(string a, ll M) {
	int temp = 0;
	int n = a.length();
	for ( int i = 0; i < n; i++) {
		temp = ( temp*10 + (a[i] - '0'))%M;
	}
	return temp;
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {	
		string a;
		ll b,M;
		cin >> a >> b >> M;
		ll res = reduce(a,M);
		cout << power(res,b,M) << endl;
	}
}

// code by Manh.

