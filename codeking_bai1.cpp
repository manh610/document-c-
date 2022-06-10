#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n,x;

void Input() {
	cin >> x >> n;
}

void Solve() {
	ll ans = 1;
	for ( int i = 2; i <= n; i++) {
		ans = ans + ans*x;
	}
	cout << ans << endl;
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





