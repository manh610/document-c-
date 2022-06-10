#include <iostream>
#include <algorithm>
using namespace std;

main ()
{
	long long n,m;
	cin >> n >> m;
	int a[n+1], b[m+1];
	for ( int i = 0; i<n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	for ( int i = 0; i<m; i++) {
		cin >> b[i];
	}
	for ( int i = 0; i<m; i++) {
		if ( b[i] < a[0] ) cout << "0" << endl;
		else {
			int l = 1, r = n, ans;
			while(l<=r){
				int mid = (l+r)/2;
				if ( a[mid] <= b[i] ) {
					ans = mid;
					l = mid + 1;
				}
				else r = mid - 1;
			}
			cout << ans+1 << endl;
		}
	
	}
	
}

// code by Manh.


