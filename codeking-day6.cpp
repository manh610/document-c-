#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
vector<ll> a;
vector<ll> b;

void Input() {
	cin >> n;
	a.resize(n);
	b.resize(n);
	for ( int i = 0; i < n; i++)	cin >> a[i];
	for ( int i = 0; i < n; i++)	cin >> b[i];
}

void Solve() {
	int left = 0, right = 0, i = 0;
	ll sum = 0, ans = -1;
	while ( i<=n-1) {
		int index;
		ll MAX = *max_element(a.begin()+i,a.end());
		for ( int t = n-1; t >=0; t--) {
			if ( a[t]==MAX ) {
				index = t;
				break;
			}
		}
		for ( int j = i; j <= index; j++) {
			sum += b[j];
		}	
		if ( sum > ans ) {
			ans  = sum;
			left = i;
			right = index;
		}
		sum = 0;
		i = index + 1;
	}
	cout << left << " " << right;
}

main()
{
	IOS()
//	int test; cin >> test;
	Input();
	Solve();
}

// code by Manh.





