#include <iostream>
using namespace std;

int n, a[100];

void Try(int i);
void Result();

main ()
{
	cin >> n;
	Try(1);
}

void Try(int i) {
	for ( int j = 0; j <= 1; j++) {
		a[i] = j;
		if ( i==n ) 
			Result();
		else
			Try(i+1);
	}
}

void Result() {
	for ( int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

// code by Manh.


