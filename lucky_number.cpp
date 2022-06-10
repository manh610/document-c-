#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	long long ans = 0,j = 2;
	for ( int i = 1; i<=n; i++) {
		ans += j;
		j*=2;
	}
	cout << ans;
}

// code by Manh.


