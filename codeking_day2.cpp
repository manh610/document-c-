#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long ll;

int n;
vector<ll> a;

void Input() {
	cin >> n;
	a.resize(n);
	for( int i=0; i<n; i++) 
		cin >> a[i];
}

void Solve() {
	ll tmp = a[0];
	for ( int i = 1; i < n; i++)
		tmp = __gcd(tmp,a[i]);
	vector<ll> b;
	for ( ll i = 1; i*i <= tmp; i++) {
		if ( tmp%i==0 ) {
			b.push_back(i);
			if ( (tmp/i)!=i ) 
				b.push_back(tmp/i);
		}
	}
	cout << b.size();
}

main()
{
	IOS()
//	int test; cin >> test;
	Input();
	Solve();
}

// code by Manh.





