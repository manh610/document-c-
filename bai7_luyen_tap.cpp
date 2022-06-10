#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

int sum(int a, int b) {
	return a/b;
}

void solve() {
	int l,n,a,b;
	cin >> l >> n >> a >> b;
	int c = (a*b)/__gcd(a,b);
	int ans = sum(n,a) + sum(n,b) - sum(n,c) - sum(l-1,a) - sum(l-1,b) + sum(l-1,c);
	cout << ans << endl;
}

main()
{
	int test;
	cin >> test;
	while (test--) {
		solve();
	}
}

// code by Manh.

