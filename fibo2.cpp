#include <iostream>
using namespace std;
typedef long long int ll;
ll F[100],n;
void Fibo(){
	F[0] = 0;
	F[1] = 1;
	for ( int i = 2; i < 93; i++) {
		F[i] = F[i-1] + F[i-2];
	}
}

void solve() {
	cin >> n;
	bool check = false;
	for ( int i = 0; i < 93; i++) {
		if ( n ==F[i] ) {
			cout << "YES";
			check = true;
			break;
		}
	}
	if ( !check ) cout << "NO";
	cout << endl;
}
main()
{
	Fibo();
	int test;
	cin >> test;
	while ( test--) {
		solve();
	}
}

// code by Manh.

