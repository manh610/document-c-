#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int a[5];
	for ( int i = 0; i<3; i++) {
		cin >> a[i];
	}
	sort(a,a+3);
	int tmp1 = a[1] - a[0];
	int tmp2 = a[2] - a[1];
	if ( tmp1==tmp2 ) cout << a[2] + tmp1;
	else if ( tmp1 == 2*tmp2 ) cout << a[0] + tmp2;
	else cout << a[1] + tmp1;
}

// code by Manh.


