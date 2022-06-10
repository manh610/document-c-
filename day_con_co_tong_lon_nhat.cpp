#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int test; cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+3];
		for ( int i = 1; i<=n; i++) {
			cin >> a[i];
		}
		int t = *max_element(a+1,a+n+1);
		if ( t < 0 ) cout << t << " " << t;
		else {
			long long max1 = 0, max2 = 0, sum = 0;
			for ( int i = 1; i<=n; i++) {
				if ( a[i]>0 ) max1 += a[i];
				sum += a[i];
				if ( sum < 0 ) sum = 0;
				max2 = max( max2, sum); 
			}
			cout << max2 << " " << max1;
		}
	}
	
}

// code by Manh.


