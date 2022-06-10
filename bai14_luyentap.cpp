#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n, a[1000];
		cin >> n;
		for ( int i = 0; i <n; i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		int x = 0, y = n-1;
		for ( int i = 0; i < n/2; i++) {
			cout << a[y] << " " << a[x] << " ";
			x++;
			y--;
		}
		if ( x==y ) cout << a[x];
		cout << endl;
	}
}

// code by Manh.

