#include <bits/stdc+++.h>
using namespace std;

int a[100],n;

void Result(){
	for ( int i = 1; i<=n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void quay_lui(int k ) {
	for ( int i = 0; i<=1; i++ ) {
		a[k] = i;
		if ( k==n ) Result();
		else quay_lui(k+1);
	}
}

main ()
{
	cout << "NHAP N : ";
	cin >> n;
	quay_lui(1);

}

// code by Manh.


