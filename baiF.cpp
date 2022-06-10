#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n,k,dem;
vector<int> v;

void Input() {
	dem = 0;
	cin >> n >>  k;
	v.resize(n);
	for ( int i = 0; i < n; i++ ) {
		cin >> v[i];
		if ( v[i]==k ) dem++;
	}
}

void Solve() {
	vector<int> v1;
	for ( int i = 0; i < n; i++) {
		if ( v[i]==k ) {
			v1.push_back(i);
		}
	}
	ll ans = 0;
	for ( int i = 0; i < v1.size(); i++) {
		int trc = 1,sau = 1;
		for ( int j = v1[i]-1; j >=0; j--) {
			if ( v[j]<=k ) trc++;
			else break;
		}
		for ( int j = v1[i]+1; j <n; j++) {
			if ( v[j]<=k ) sau++;
			else break;
		}
		ans += ( trc*sau );
	}
	for (int i = 0; i < v1.size()-1; i++) {
		for ( int j = i+1; j < v1.size(); j++) {
			int ok = 0;
			for ( int t = v1[i]+1; t <= v1[j]-1; t++) {
				if ( v[t] > k) {
					ok = 1;
					break;
				}
			}
			if ( ok==0 ) {
				if ( v1[i]!=0 ) ans-=2;
				if ( v1[j]!=0 ) ans-=2;
			}
		}
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





