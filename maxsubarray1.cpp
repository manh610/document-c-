#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n, *a;
		cin >> n;
		a = new int[n];
		int Max = -1e7;
		long long sum = 0, ans = 0;
		for ( int i = 1; i<=n; i++) {
			cin >> a[i];
			if ( a[i] > Max ) Max = a[i];
			sum += a[i];
			if ( sum < 0 ) sum = 0;
			ans = max ( ans, sum);
		}
		if ( !ans ) cout << Max << endl;
		else cout << ans << endl;
		delete a;
	}
}

// code by Manh.


