#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[n+1];
	int vt1, vt2;
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
		if ( a[i]==1 ) vt1 = i;
		if ( a[i]==n ) vt2 = i;
	}
	int min, max;
	if ( vt1 < vt2 ) {
		min = vt1; max = vt2;
	}
	else {
		min = vt2; max = vt1;
	}
	if ( (n-min) > ( max-1 ) ) cout << n - min;
	else cout << max - 1;
	cout << endl << vt1 << " " << vt2 << " " << min << " " << max; 
}

// code by Manh.


