#include <iostream>
#include <cstring>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int ans = 0;
	for ( int i = 0; i<s.length(); i++) {
		ans = (ans*10 + s[i] -'0' )%36;
	}
	if ( ans==0 ) cout << "YES" << endl;
	else cout << "NO" << endl;
}

main ()
{
	int test;
	cin >> test;
	cin.ignore();
	while ( test-- ) {
		solve();
	}

}

// code by Manh.


