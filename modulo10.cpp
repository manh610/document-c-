#include <iostream>
using namespace std;
typedef long long int ll;
const unsigned int p = 1e9+7;
int n, x, a[4000];

void Init() {
	cin >> n >> x;
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}

void solve( int a[], int n, int x) {
	ll res = a[1]%p;
	for ( int i = 2; i <= n; i++) {
		res = ( (res*x)%p + a[i])%p;
	}
	cout << res << endl;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		Init();
		solve(a,n,x);
	}

}

// code by Manh.


