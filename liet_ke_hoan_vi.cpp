#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int check[10] = { 0 };
int a[10],n;

void Result() {
	for ( int i = 1; i<=n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void dequy( int k ) {
	for ( int i = 1; i<=n; i++) {
		if ( check[i]==0 ) {
			a[k] = i;
			check[i] = 1;
			if ( k==n ) Result();
			else dequy(k+1);
			check[i] = 0;
 		}
	}
}

main ()
{
	cin >> n;
	dequy(1);
}

// code by Manh.


