#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long int ll;

string a, b;

void solve() {
	if ( a.size() < b.size() || ( a.size()==b.size() && a<b ) ) swap(a,b);
	int x = a.size() - b.size();
	if ( x > 0 ) {
		char t = '0';
		while ( x-- ) {
			b = t+b;
		}
	}
	string c = "";
	int nho = 0;
	for ( int i = a.size()-1; i >= 0; i-- ) {
		int x = a[i] - '0', y = b[i] - '0';
		if ( x < (y+nho) ) {
			c += ( '0' + (x+10-y-nho));
			nho = 1;
		}
		else {
			c += ( '0' + (x-y-nho));
			nho = 0;
		}
	}
	for ( int j = c.size()-1; j >= 0; j--) cout << c[j];
	cout << endl;
}

main()
{
	int test;
	cin >> test;
	cin.ignore();
	while ( test-- ) {
		cin >> a >> b;
		solve();
	}
}

// code by Manh.

