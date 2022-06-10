#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n+2];
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	int b[200] = {0};
	int tmp = 1;
	for ( int i = 1; i<=n; i++) {
		b[tmp]++;
		if ( a[i]!=a[i+1] ) tmp++; 
	}
	int dem = 0;
	for ( int i = 1; i<tmp; i++) {
		dem += b[i]/2;
	}
	cout << dem/2 << endl;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
	}

}

// code by Manh.


