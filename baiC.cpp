#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
string s;
vector<string> v;

void Input() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}
}

void Solve() {
	ll ans = 0;
	for ( int i = 0; i<n; i++) {
		if ( v[i]=="Tetrahedron") ans+=4;
		else if ( v[i]=="Cube") ans += 6;
		else if ( v[i]=="Octahedron") ans += 8;
		else if ( v[i]=="Dodecahedron") ans += 12;
		else ans += 20;
	}
	cout << ans;
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





