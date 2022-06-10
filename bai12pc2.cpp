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
		int n,x;
		cin >> n >> x;
		int a[n+2];
		for ( int i=1; i<=n; i++) {
			cin >> a[i];
		}
		int l = 1, r = n;
		while ( l <= r) {
			int mid = (l+r)/2;
			if ( a[mid] == x ) {
				cout << mid;
				break;
			}
			if ( a[mid] > x ) r = mid-1;
			else l = mid +1;
		}
		if (l>r) cout << "NO";
		cout << endl;
	}

}

// code by Manh.


