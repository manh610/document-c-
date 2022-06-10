#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

bool test (int n ) {
	if ( n==0 ) return false;
	if ( n<3 ) return true;
	if ( n%2!=0 ) return false;
	return test(n/2); 
}
main ()
{
	int tet,n;
	cin >> tet;
	while ( tet-- ) {
		cin >> n;
		cout << test(n);
	}

}

// code by Manh.


