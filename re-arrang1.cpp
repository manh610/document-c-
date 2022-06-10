#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	long long a[n+1], b[n+1];
	int j = 1;
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
		if ( a[i] !=0 ) {
			b[j] = a[i];
			j++;
		}
	}
	j--;
	sort(b+1, b + j + 1);
	for ( int i = 1; i <= j; i++) {
		a[i] = b[i];
	}
	for ( int i = j+1; i <=n; i++) {
		a[i] = 0;
	}
	for ( int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
	}

}

// code by Manh.


