#include <iostream>
#include <algorithm>
using namespace std;

main ()
{
	long long n,x;
	cin >> n >> x;
	long long a[n+1];
	for ( long long i = 0; i<n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	long long dem = 1, tmp, min = 1000000000,ans = 0,ok = 0;
	for ( long long i = 0; i<n; i++) {
		if ( a[i]==a[i+1] ) {
			dem++;
		}
		else ok = 1;
		if ( ok==1 && dem<=min ) {
			min = dem;
			tmp = a[i];
			if ( tmp > ans ) ans = tmp;
			ok = 0;
			dem = 1;
		}
	}
	long long res;
	res = n*x - ans*min;
	cout << res;
}

// code by Manh.


