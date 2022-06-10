#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
const ll MAX = 1e9;

ll l,r;
bool Prime[MAX];
void Input() {
	cin >> l >> r;
}

void Sang() {
	Prime[0] = Prime[1] = 1;
	for ( ll i = 2; i*i <= MAX; i++) {
		if ( Prime[i]==0 ) {
			for ( ll j = i*i; j <= MAX; j+=i )
				Prime[j] = 1;
		}
	}
}

void Solve() {
	ll ans = 0;
	for ( ll i = l; i <= r; i++) {
		if ( Prime[i]==0 ) 
			ans++;
	}
	cout << ans << endl;
}

main()
{
	IOS()
	memset(Prime,0, sizeof(Prime));
	Sang();
	int test; cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





