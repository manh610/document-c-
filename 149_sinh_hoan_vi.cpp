// sinh hoan vi

#include <iostream>
#include <algorithm>
using namespace std;

int a[100],check[100],n;

void Result() {
	for (int i = 1; i<=n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void quay_lui(int i) {
	for ( int j = 1; j<=n; j++ ) {
		if ( check[j]==0 ) {
			a[i] = j;
			check[j] = 1;
			if ( i==n ) Result();
			else quay_lui(i+1);
			check[j] = 0;
		}
	}
} 

main ()
{
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		check[i] = 0;
	}
	quay_lui(1);
}

// code by Manh.


