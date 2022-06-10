#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int M, N, a, b;
		cin >> M >> N >> a >> b;
		int tmp = a*b/__gcd(a,b);
		int ans = N/a - M/a + N/b - M/b - N/tmp + M/tmp;
		cout << ans << endl; 
	}

}

// code by Manh.


