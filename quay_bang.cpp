#include <iostream>
#include <cmath>
using namespace std;

float tinh(int a, int c, int b, int d) {
	float thuong1 = 1.0*a/c;
	float thuong2 = 1.0*b/d;
	return abs(thuong1 - thuong2);
}

main ()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	float kq = tinh(a,c,b,d);
	int ans = 0;
	if ( kq < tinh(c,d,a,b) ) {
		kq = tinh(c,d,a,b);
		ans = 1;
	}
	if ( kq < tinh(d,b,c,a) ) {
		kq = tinh(d,b,c,a);
		ans = 2;
	}
	if ( kq < tinh(b,a,d,c) ) {
		ans = 3;
	}
	cout << ans;
}

// code by Manh.


