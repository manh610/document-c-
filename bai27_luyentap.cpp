#include <iostream>
using namespace std;
typedef long long int ll;

bool check[1000000];

void sang() {
	for ( int i = 2; i <= 1000000; i++) check[i] = true;
	check[0] = false;
	check [1] = false;
	for ( int i = 2; i <= 1000; i++) {
		if ( check[i] ) {
			for ( int j = i*i; j <= 1000000; j+=i) {
				check[j] = false;
			}
		}
	}
}

main()
{
	sang();
	int test;
	cin >> test;
	while ( test-- ) {
		int n, ok = 0;
		cin >> n;
		for ( int i = 2; i <= n/2; i++) {
			if ( check[i] && check[n-i] ) {
				cout << i << " " << n-i << endl;
				ok = 1;
				break;
			}
		}
		if ( !ok ) cout << "-1" << endl;
	}

}

// code by Manh.

