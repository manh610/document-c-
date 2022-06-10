#include <iostream>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n,k, dem = 0;
		cin >> n >> k;
		int a[n+5];
		for ( int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for ( int i = 0; i < n-1; i++) {
			for ( int j = i+1; j < n; j++) 
				if ( a[i] + a[j] == k ) dem++;
		}
		cout << dem << endl;
	}
}

// code by Manh.

