#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
main ()
{
	int n, L;
	cin >> n >> L;
	int a[n+5];
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	double MAX = -10;
	for ( int i = 1; i < n; i++) {
		double x = a[i+1] - a[i];
		if ( x > MAX ) MAX = x;
	}
	double ans = MAX/2;
	if ( ans < a[1] ) ans = a[1];
	if ( ans < (L-a[n]) ) ans = a[n];
	printf("%.10lf", ans);
}

// code by Manh.


