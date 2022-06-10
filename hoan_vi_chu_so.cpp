#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
main ()
{
	string s;
	cin >> s;
	int n = s.length();
	int vt = -10, vt1 = -10;
	for ( int i = n-1; i>=0; i--) {
		if ( s[i] > s[i-1] ) {
			vt = i-1;
			break;
		}
	}
	if ( vt<0 ) cout << "0";
	else {
		for ( int i = n-1; i>=0; i--) {
			if ( s[i] > s[vt]) {
				vt1 = i;
				break;
			}
		}
		if ( vt1<0 ) vt1 = vt-1;
		swap(s[vt],s[vt1]);
		for ( int i = 0; i<=vt; i++) {
			cout << s[i];
		}
		for ( int i = n-1; i>vt; i--) {
			cout << s[i];
		}
	}
}

// code by Manh.


