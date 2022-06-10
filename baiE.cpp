#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;
const ll MAX = 1e6;

int Nto[MAX];

void Sang() {
	for ( int i = 2; i*i <= MAX; i++) {
		if ( Nto[i] ) {
			for ( int j = i*i; j <= MAX; j+=i ) {
				Nto[j] = 0;
			}
		}
	}
}

int n;
string s;

void Input() {
	cin >> n;
	cin >> s;
}

void Solve() {
	vector<int> v;
	int dem = 1;
	for ( int i = n; ; i++) {
		if ( Nto[i]==1 ) {
			v.push_back(i);
			dem++;
		}
		if ( dem>26 ) break;
	}
	for ( int i = 0; i < s.size(); i++) {
		int tmp = s[i] - 97;
		cout << v[tmp] << " ";
	}
	cout << endl;
}

main()
{
	IOS()
	for ( int i = 2; i<= MAX; i++) Nto[i] = 1;
	Nto[0] = Nto[1] = 0;
	Sang();
	int test; cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





