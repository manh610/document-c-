#include <iostream>
using namespace std;
typedef long long int ll;

bool check[10005];

void sang() {
	for ( int i = 2; i <= 10005; i++) check[i] = true;
	check[0] = false;
	check [1] = false;
	for ( int i = 2; i*i<=10005; i++) {
		if ( check[i] == true ) {
			for ( int j = i*i; j <= 10005; j+=i ) 
				check[j] = false;
		}
	}
}

void solve() {
	int n;
	cin >> n;
	cout << "1 ";
	for ( int i = 2; i <= n; i++) {
		if ( i%2==0 ) cout << "2 ";
		else {
			for ( int k = 1; k <=i; k++ ) {
				if ( i%k==0 && check[k] ) {
					cout << k << " ";
					break;
				}
			}
		}
	}
	cout << endl;
}

main()
{
	int test;
	cin >> test;
	sang();
	while ( test-- ) {
		solve();
	}
}

// code by Manh.

