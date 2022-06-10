#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;
const int M = 123456789;

int demday ( long long n ) {
	if ( n==1 ) return 1;
	return 2*demday(n-1) % M; 
} 

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		long long n;
		cin >> n;
		cout << demday(n) << endl;
	}

}

// code by Manh.


