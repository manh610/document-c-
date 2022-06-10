#include <iostream>
using namespace std;

int power(int n) {
	int ans = 1;
	for ( int i = 1; i<=n; i++) {
		ans *= 10;
	}
	return ans;
}

main ()
{
	int c,k;
	cin >> c >> k;
	int tmp = power(k);
	int du = c%tmp;
	if ( du >= tmp/2 ) cout << c + tmp - du;
	else cout << c - du;

}

// code by Manh.


