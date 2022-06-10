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
		int x = n%10;
		int y = 0;
		while ( n>0 ) {
			y = n%10;
			n/=10;
		}
		if ( x==y ) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

// code by Manh.


