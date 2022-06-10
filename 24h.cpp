#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

string s;

void Input() {
	cin >> s;
}

void Solve() {
	int n = s.length();
	if ( s[n-2]=='P' ) {
		int tmp = (s[0]-48)*10 + s[1] - 48;
		if ( tmp==12 ) cout << "00";
		else cout << tmp + 12;
		for ( int i = 2; i<n-2; i++) cout << s[i];
	} else {
		for ( int i = 0; i < n-2; i++)
			cout << s[i];
	}
}

main()
{
	IOS()
	int test=1;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





