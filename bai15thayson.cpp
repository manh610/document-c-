#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		long long n;
		cin >> n;
		int f1 = 1, f2 = 1;
		long long ans = 0;
		for ( int i=3; i<=n; i++) {
			ans = f1+f2;
			f1 = f2;
			f2 = ans;
		}
		if ( n<3 ) cout << "1";
		else cout << ans;
		cout << endl;
	}

}

// code by Manh.


