#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[1005];
	int dem = 0;
	for ( int i = 1; i <= n; i++) {
		cin >> a[i];
		if ( a[i]==0 ) dem++;
	}
	if ( dem==1 ) cout << "YES";
	else cout << "NO";

}

// code by Manh.


