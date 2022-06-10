#include <bits/stdc++.h>
using namespace std;

int n,k,a[20];

void Result() {
	for ( int i = 1; i<=k; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void quaylui(int i ) {
	for ( int j = a[i-1] +1; j<=n-k+i; j++ ) {
		a[i] = j;
		if ( i==k ) Result();
		else quaylui(i+1);
	}
}

main ()
{
	cin >> n >> k;
	quaylui(1);
}

// code by Manh.


