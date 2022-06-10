#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
const ll mod = 1e9+7;

ll n, k;

void Input() {
	cin >> n >> k;
}

ll powermod(ll a, ll b) {
	if ( b==1 ) return a;
	ll tmp = powermod(a,b/2);
	tmp = tmp*tmp%mod;
	if ( b%2 ) return tmp*a%mod;
	return tmp;
}

ll C(ll n , ll k){
    ll res = 1;
    for(int i = 1; i <= k ; i++ , n --){
        res = (res*n/i)%mod;
    }
    return res;
}

void Solve() {
	ll dem = 1;
	ll ans = 0;
	while ( dem < 1.0*n/2) {
		ans += C(n,dem)*(powermod(dem,k)+powermod(n-dem,k))%mod;
		dem++;
	}
	ans += powermod(n,k)%mod;
	cout << ans;
}

main()
{
	IOS()
//	int test; cin >> test;
	Input();
	Solve();
}

// code by Manh.





