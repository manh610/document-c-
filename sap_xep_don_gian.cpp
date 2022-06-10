#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[1005];
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	int dem = 0;
	for ( int i = 1; i < n; i++) {
		if ( a[i] < a[i+1] ) dem++;
	}
	cout << dem;
}

// code by Manh.


