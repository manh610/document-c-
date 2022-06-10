#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll power(int a, int b) {
	if ( b==0 ) return 1;
	if ( b==1 ) return a;
	ll x = power(a,b/2);
	if ( b%2 ) return x*x*a;
	else return x*x;
}

main()
{
	int n; cin >> n;
	int a[n+3];
	for ( int i = 0; i <= n; i++) {
		cin >> a[i];
	}
	int b; cin >> b;
	int res = 0, temp = n;
	for ( int i = 0; i <= n; i++) {
		res += a[i]*temp*power(b,temp-1);
		temp--;
	}
	cout << res;
}

// code by Manh.

