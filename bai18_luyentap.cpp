#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+5];
		for ( int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = 0, dem = 0;
		for ( int i = 0; i < n-1; i++) {
			if ( a[i] < a[i+1] ) dem++;
			else dem = 0;
			ans = max ( ans, dem);
		}
		cout << ans << endl;
	}
}

// code by Manh.

