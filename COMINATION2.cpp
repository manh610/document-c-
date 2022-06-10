#include <iostream>
using namespace std;
typedef long long int ll;

int n, k, a[100];

void Init() {
	for ( int i = 0; i <= k; i++) {
		a[i] = i;
	}
}

void Result() {
	for ( int i = 1 ; i <= k; i++) {
		cout << a[i];
	}
	cout << " ";
}

void Try(int i) {
	for ( int j = a[i-1] + 1; j <= n-k+i; j++) {
		a[i] = j;
		if ( i==k ) 
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
		cin >> n >> k;
		Init();
		Try(1);
		cout << endl;
	}

}

// code by Manh.


