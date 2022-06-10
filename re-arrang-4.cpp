#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

void solve() {
	int a[10005],n;
	cin >> n;
	int res[10005];
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1, a+n+1);
	int index = 1;
	for ( int i = 1; i <=n; i+=2) {
		res[i] = a[index];
		index++;
	}
	for ( int i = 2; i <= n; i+=2) {
		res[i] = a[index];
		index++;
	}
	for ( int i = 1; i <=n; i++) cout << res[i] << " ";
	cout << endl;
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
	}
}

// code by Manh.

