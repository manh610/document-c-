#include <iostream>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n,x;
		cin >> n;
		ll sum = 0;
		for ( int i = 0; i < n-1; i++) {
			cin >> x;
			sum += x;
		}
		ll sum2 = n*(n+1)/2;
		cout << sum2 - sum << endl;
	}
}

// code by Manh.

