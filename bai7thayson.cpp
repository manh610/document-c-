#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int ans = 0;
		while ( n>0 ) {
			ans += n%10;
			n/=10;
		}
		cout << ans << endl;
	}

}

// code by Manh.


