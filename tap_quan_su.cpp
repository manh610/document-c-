#include <iostream>
using namespace std;
main ()
{
	int test,a[50];
	cin >> test;
	while ( test-- ) {
		int n,k,check[50] = {0};
		cin >> n >> k;
		for ( int i = 1; i<=k; i++) {
			cin >> a[i];
			check[a[i]] = 1;
		}
		int j = k,dem = 0;
		while ( j>0 && a[j]==n-k+j ) {
			j--;
		}
		if ( j>0 ) {
			a[j]++;
			for ( int u = j+1; u<=k; u++) {
				a[u] = a[j] + u - j;
			}		
			for ( int i = 1; i<=k; i++) {
				if ( !check[a[i]] ) dem++;
			}
			cout << dem << endl;
		}
		else cout << k << endl;
	}
}

// code by Manh.


