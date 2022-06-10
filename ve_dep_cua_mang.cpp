#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[n+1];
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int t = *max_element(a+1,a+n+1);
	if ( t < 0 ) cout << t;
	else {
		long long sum = 0, ans = 0 ;
		for ( int i = 1; i <= n; i++ ) {
			sum += a[i];
			if ( sum < 0 ) sum = 0;
			ans = max ( sum, ans);
		}
		cout << ans;
	}
}

// code by Manh.


