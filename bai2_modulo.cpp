#include <iostream>
using namespace std;

void solve() {
	int a,m;
	cin >> a >> m;
	int check = 1;
	for ( int i = 0; i<m; i++) {
		if ( (a*i)%m==1 ) {
			check = 0;
			cout << i << endl;
			break;
		}
	}
	if ( check ) cout << "-1" << endl;
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


