#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n, a[6];
int danhdau[50];

void Input() {
	cin >> n;
}

void Solve() {
	for ( int i = 0; i < 50; i++) danhdau[i] = 0;
	while ( n-- ) {
		for ( int i = 0; i < 6; i++) {
			cin >> a[i];
			danhdau[a[i]] = 1;
		}
	}
	bool ok = true;
	for ( int i = 1; i < 50; i++) {
		if ( danhdau[i] == 0 ) {
			ok = false;
			break;
		}
	}
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
}

main()
{
	IOS()
//	int test; cin >> test;
	while ( true ) {
		Input();
		if ( n==0 ) break;
		Solve();
	}
}

// code by Manh.





