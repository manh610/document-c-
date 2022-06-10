#include <iostream>
#include <cstring>
using namespace std;

void solve() {
	string n;
	long long m;
	cin >> n >> m;
	long long ans = 0;
	for ( int i = 0; i < n.length(); i++) {
		ans = ( ans*10 + n[i] - '0' )%m;
	}
	cout << ans << endl;
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


