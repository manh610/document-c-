#include <iostream>
using namespace std;
typedef long long int ll;

void solve() {
	int n, x = 0;
	cin >> n;
	int a = n;
	while ( a > 0 ) {
		int du = a%10;
		x = x*10 + du;
		a /= 10;
	}
	if ( x==n ) cout << "YES";
	else cout << "NO";
	cout << endl;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
	}
}

// code by Manh.


