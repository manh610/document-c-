#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

char s[10004];
char t[10004];
int n;

void Input() {
	cin >> n;	
	for ( int i = 0; i < n; i++) cin >> s[i];
	for ( int i = 0; i < n; i++) cin >> t[i];
}

void Solve() {
	int dem = 0;
	int j = 0;
	char tmp1[10004], tmp2[10004];
	for ( int i = 0; i < n; i++) {
		if ( s[i]!=t[i] ) {
			dem++;
			tmp1[j] = s[i];
			tmp2[j] = t[i];
			j++;
		}
		if ( dem>2 ) {
			cout << "NO" << endl;
			return;
		}
	}
	if ( dem==0 ) {
		cout << "YES" << endl;
		return;
	}
	if ( dem==2 ) {
		if((tmp1[0]==tmp1[1]) && (tmp2[0]==tmp2[1]) ) {
			cout << "YES" << endl;
			return;
		}
		cout << "NO" << endl;
		
	} else {
		cout << "NO" << endl;
		return;
	}
}

main()
{
	IOS()
	int test; cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





