#include <iostream>
using namespace std;

void solve()
{
	long long n;
	cin >> n;
	if ( n%100==86 ) cout << "1";
	else cout << "0";
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


