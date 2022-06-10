#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int n = s.length();
	int vt = -10;
	for ( int i = n-1; i>=0; i--) {
		if ( s[i-1] > s[i] ) {
			vt = i-1;
			break;
		}
	}
	if ( vt<0 ) cout << "-1";
	else {
		int vt1 = -10;
		for ( int i = n-1; i>=0; i--) {
			if ( s[i] < s[vt] ) {
				vt1 = i;
				break;
			}
		} 
		if ( vt1 < 0 ) vt1 = vt-1;
		for ( int i = 0; i<vt; i++ ) {
			cout << s[i];
		}
		for ( int i = vt; i<=vt1; i++){
			cout << s[i];
		}
		cout << s[vt];
	} 
	cout << endl;
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


