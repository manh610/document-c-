#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	int n;
	cin >> n;
	int a[n+3];
	for ( int i = 0; i <n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	int dem = 1, ans = 1, res = a[0];
	for ( int i = 0; i < n-1; i++) {
		if ( a[i]==a[i+1] ) {
			dem++;
		}
		else {
			cout << a[i] << " xuat hien " << dem << " lan" << endl;
			if ( ans < dem ) {
				ans = dem;
				res = a[i];
			}
			dem = 1;
		}
	}
	cout << res << " xuat hien nhieu nhat voi " << ans << " lan.";
}

// code by Manh.

