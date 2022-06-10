#include <iostream>
using namespace std;

int stop = 0, n = 4, a[50];

void In() {
	for ( int i= 1; i<= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void SinhTk() {
	int i = n;
	while ( a[i] ) {
		a[i] = 0;
		i--;
	}
	if ( i==0 ) stop = 1;
	else a[i] = 1;
}

main ()
{
	cin >> n;
	for ( int i = 1; i<=n; i++) a[i]=0;
	while ( !stop ) {
		In();
		SinhTk();
	}
}

// code by Manh.


