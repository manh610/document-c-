#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n, b[105];

void Input() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		cin >> b[i];
	}
}

void Solve() {
	cout << b[1];
	for ( int i = 2; i <= n; i++)
		cout << " " << b[i]*i - b[i-1]*(i-1);
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





