#include <iostream>
using namespace std;
typedef long long int ll;

int n, a[100];
bool check[100];

void Result() {
	for ( int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << " ";
}

void Try(int i) {
	for ( int j = 1; j <= n; j++) {
		if ( check[j] ) {
			a[i] = j;
			check[j] = false;
			if ( i==n ) 
				Result();
			else
				Try(i+1);
			check[j] = true;
		}
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		cin >> n;
		for ( int i = 1; i <= n; i++) {
			check[i] = true;
		}
		Try(1);
		cout << endl;
	}

}

// code by Manh.


