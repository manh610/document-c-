#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	int test; cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		for ( int i = 2; i <= n; i++) {
			if ( n%i==0 ) {
				while ( n%i==0 ) {
					cout << i;
					n/=i;
					if ( n>1 ) cout << " x ";
				}
			}
		}
		cout << endl;
	}
}

// code by Manh.

