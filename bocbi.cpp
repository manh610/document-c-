#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;

int a[10005],b[10005];

main ()
{
	int n;
	cin >> n;
	long long s1 = 0, s2 = 0;
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
		if ( i%2 ) s1+=a[i];
		else s2+=a[i];
	}
	for ( int i = 1; i<=n; i++) {
		cin >> b[i];
		if ( i%2 ) s2+=b[i];
		else s1+=b[i];
	}
	if ( s1 < s2 ) cout << s2;
	else cout << s1;

}

// code by Manh.


