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
		long long n;
		cin >> n;
		int chan = 0, le = 0;
		while ( n>0 ) {
			int tmp = n%10;
			if ( tmp%2==0 ) chan++;
			else le++;
			n/=10;
		}
		cout << le << " " << chan << endl;
	}

}

// code by Manh.


