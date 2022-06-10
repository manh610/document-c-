#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void solve() {
	int t;
	cin >> t;
	string s;
	cin >> s;
	int vt = 0;
	for ( int i = s.length()-1; i>0; i--) {
		if ( s[i] > s[i-1] ) {
			vt = i-1;
			break;
		}
	}
	if ( vt==0 ) cout << t << " BIGGEST";
	else {
		int vt1 = 0;
		for ( int i = s.length()-1; i>=0; i--) {
			if ( s[i] > s[vt] ) {
				vt1 = i;
				break;
			}
		}
		if ( vt1 == 0) vt1 = vt-1;
		char c;
		c = s[vt1];
		s[vt1] = s[vt];
		s[vt] = c;
		cout << t << " ";
		for ( int i = 0; i<=vt; i++) {
			cout << s[i];
		}
		for ( int i = s.length()-1; i>vt; i--) {
			cout << s[i];
		}
	}
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
