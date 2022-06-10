#include <iostream>
//#include <cmath>
#include <algorithm>
//#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+1];
		int Max = -1e7;
		long long sum = 0,ans = 0, vitri, dau = 0, cuoi = 0,dem = 0;
		for ( int i = 1; i<=n; i++) {
			cin >> a[i];
			if ( a[i] > Max ) {
				Max = a[i];
				vitri = i;	
			}
			sum += a[i];
			dem++ ;
			if ( sum < 0 ) {
				sum = 0;
				dem = 0;
			}
			if ( ans < sum ) {
				ans = sum;
				dau = i - dem + 1 ;
				cuoi = i;
			}
		}
		if ( ans==0 ) cout << a[vitri] << endl;
		else {
			for ( int i = dau; i<= cuoi; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}
}

// code by Manh.


