#include <iostream>
using namespace std;

int a[100], check[100],n ;

void Result() {
	for ( int i = 1; i<=n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void quay_lui(int i) {
	for ( int j = 0; j<=1; j++) {
		a[i] = j;
		if ( i==n ) Result(); 
		else quay_lui(i+1);
	}
}

main ()
{
	cin >> n;
	quay_lui(1);

}

// code by Manh.


