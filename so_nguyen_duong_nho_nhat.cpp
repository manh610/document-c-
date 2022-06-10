#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int n,k;
	cin >> n >> k;
	int a[n+1];
	for ( int i = 1; i<=n; i++) cin >> a[i];
	sort(a+1,a+n+1);
	if ( a[k+1]==a[k] ) cout << "-1";
	else cout << a[k];
}

// code by Manh.


