#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int a,b,n,S;

void Input() {
	cin >> n >> b >> a >> S;
}

void Solve() {
	if ( a*n+b<S ) {
		cout << "NO" << endl;
		return;
	} else {
		int tmp = S/a;
		if ( tmp>n ) tmp=n; 
		if ( S-(tmp*a)<=b ) {
			cout << "YES" << endl;
			return;
		}
		cout << "NO" << endl;
	}
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





