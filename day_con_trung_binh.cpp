#include <iostream>
using namespace std;

float max(float a, float b) {
	return (a>b)?a:b;
}

main ()
{
	int n,k;
	cin >> n >> k;
	int a[n+1];
	for (int i = 1; i<=n; i++) {
		cin >> a[i];
	}
	float s = 0;
	long long sum = 0;
	int dem = 0,ans = 0,tmp = 0;
	for ( int i = 0; i<=n; i++) {
		dem++;
		sum += a[i];
		s = sum/dem;
		if ( s < ans ) {
			sum = 0;
			dem = 0;
		}
		if ( s > ans ) {
			if ( dem > tmp ) {
				ans = s;
				tmp = dem;
			} 
		}
	}
	if ( ans>=k ) cout << tmp;
	else cout << "0";
}

// code by Manh.


