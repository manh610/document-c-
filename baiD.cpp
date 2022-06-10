#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
int n;
vector<pair<int,int>> a;
vector<pair<int,int>> b;

void Input() {
	cin >> n;
	a.resize(n);
	b.resize(n);
	for ( int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}
	for ( int i = 0; i < n; i++) {
		cin >> b[i].first;
		b[i].second = i;
	}
}

bool cmp( pair<int,int> a, pair<int,int> b) {
	return a.first < b.first;
}

void Solve() {
	ll ans = 0;
	sort(all(a),cmp);
	sort(all(b),cmp);
	for ( int i = 0; i < n; i++) {
		if ( a[i].second > b[i].second ) ans++;
		if ( a[i].second < b[i].second ) ans--;
	}
	cout << abs(ans);
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





