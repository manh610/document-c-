#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isCheckSNT(int n) {
	if ( n < 2 ) return false;
	for ( int i = 2; i <= sqrt(n); i++ ) {
		if ( n%i==0 ) 
			return false;
	}
	return true;
}

int getMin(int a, int x) {
	return abs(a-x);
}

main()
{
	int n;
	cin >> n;
	int a[n+2];
	for ( int i = 0; i < n; i++) cin >> a[i];
	int x;
	cin >> x;
	int index = -1, min = 10000000;
	for ( int i = 0; i < n; i++) {
		int tmp = getMin(a[i],x);
		if ( isCheckSNT(a[i]) && (tmp < min)) {
			min = tmp;
			index = i;
		}
	}
	cout << index;
}

// code by Manh.

