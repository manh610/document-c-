#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

string s;
string ans;

void Input() {
	cin >> s;
}

void Solve() {
	ans = "";
	if ( s.length()%3==1 ) s = "00" + s;
	if ( s.length()%3==2 ) s = "0" + s;
	int n = s.length();
	for ( int i = n-1; i >=2 ; i-=3) {
		if ( s[i-2]=='0' && s[i-1]=='0' && s[i]=='0' ) ans += "0";
		if ( s[i-2]=='0' && s[i-1]=='0' && s[i]=='1' ) ans += "1";
		if ( s[i-2]=='0' && s[i-1]=='1' && s[i]=='0' ) ans += "2";
		if ( s[i-2]=='0' && s[i-1]=='1' && s[i]=='1' ) ans += "3";
		if ( s[i-2]=='1' && s[i-1]=='0' && s[i]=='0' ) ans += "4";
		if ( s[i-2]=='1' && s[i-1]=='0' && s[i]=='1' ) ans += "5";
		if ( s[i-2]=='1' && s[i-1]=='1' && s[i]=='0' ) ans += "6";
		if ( s[i-2]=='1' && s[i-1]=='1' && s[i]=='1' ) ans += "7";
	}
	for ( int i = ans.length()-1; i >= 0; i--) cout << ans[i];
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





