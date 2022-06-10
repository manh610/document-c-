#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int c,v0,v1,a,b;

void Input() {
	cin >> c >> v0 >> v1 >> a >> b;
}

void Solve() {
	int ans = 0;
	int tmp = 0;
	while ( 1 ) {
		tmp += v0;
		ans++;
		if ( tmp>=c ) break;
		v0 += ans*a;
		if ( v0 >= v1 ) v0 = v1;
		tmp -= b ;
	}
	cout << ans;
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





