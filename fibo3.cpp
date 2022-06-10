#include <iostream>
using namespace std;
typedef long long int ll;

int F[20], a[105];

void fibo() {
	F[0] = 0;
	F[1] = 1;
	for ( int i = 2; i<=18; i++) {
		F[i] = F[i-1] + F[i-2];
	}
}

main()
{
	fibo();
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		for ( int  i = 1; i <= n; i++) {
			cin >> a[i];
			for ( int j = 0; j <=18; j++ ) {
				if ( a[i]==F[j] ) {
					cout << a[i] << " ";
					break;
				}
			}
		}
		cout << endl;
	}
}

// code by Manh.

