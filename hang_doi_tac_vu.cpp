#include <iostream>
using namespace std;

void solve()
{
	int n, t;
	cin >> n >> t;
	int a[n+5];
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int sum = 0, dem = 0;
	for ( int i = 1; i <= n; i++) {
		sum += a[i]; 
		if ( sum > t ) break;
		dem++;
	}
	cout << dem << endl;
}

main ()
{
	int test;
	cin >> test;
	while (test--) {
		solve();
	}

}

// code by Manh.


