#include <iostream>
using namespace std;
main ()
{
	int n,k;
	cin >> n >> k;
	int dem = 0;
	int check[n+1];
	for ( int i =2; i<=n; i++) {
		check[i] = 0;
	}
	int ans, tmp = 0;
	for ( int i = 2; i<=n; i++) {
		if ( check[i]==0 ) {
			for ( int j = i; j<=n; j+=i ) {
				if ( check[j]==0 ) {
					check[j] = 1;
					dem++;
					if ( dem==k ) {
						ans = j;
						tmp = 1;
						break;
					}
				}
			}
		}
		if ( tmp==1 ) break;
	}
	cout << ans;
}

// code by Manh.


