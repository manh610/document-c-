#include <iostream>
#include <algorithm>
using namespace std;

int stop = 0, n = 3, X[50];

void In() {
	for ( int i= 1; i<= n; i++) {
		cout << X[i] << " ";
	}
	cout << endl;
}

void SinhTk() {
	int i = n-1;
	while ( X[i] > X[i+1] ) {
		i--;
	}
	if ( i==0 ) stop = 0;
	else {
		int j = n;
		while ( X[j] < X[i] ) j--;
		swap(X[i],X[j]);
		int d = i+1, c = n;
		while ( d<c ) {
			swap(X[d], X[c]);
			d++;
			c--;
		}
	}
}

main ()
{
	// Thiet lap cau hinh dau tien
	for ( int i=1; i<=n; i++) X[i]=i;
	while ( !stop ) {
		In();
		SinhTk();
	}
}

// code by Manh.


