#include <iostream>
using namespace std;
int n, dem = 0;
bool xuoi[100];
bool nguoc[100];
bool x[100];

void Init() {
	cin >> n;
	for ( int i = 1; i <= 2*n-1; i++) {
		x[i] = true;
		xuoi[i] = true;
		nguoc[i] = true;
	}
}

void Try(int i) {
	for ( int j = 1; j <= n; j++) {
		if ( x[j] && xuoi[i-j+n] && nguoc[i+j-1] ) {
			x[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
			if ( i==n ) dem++;
			else Try(i+1);
			x[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
		}
	}
}

main ()
{
	Init();
	Try(1);
	cout << dem;
}

// code by Manh.


