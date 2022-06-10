#include <iostream>
using namespace std;
typedef long long int ll;

int n;
int a[100];

void Init() {
	for ( int i = 1; i <= n; i++ ) {
		a[i] = 0;
	}	
}

void Result() {
	for ( int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << " ";
}

void Try( int i) {
	for ( int j = 0; j <= 1; j++) {
		a[i] = j;
		if ( i==n ) 
			Result();
		else 
			Try(i+1);
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		cin >> n;
		Init();
		Try(1);
		cout << endl;
	}

}

// code by Manh.


