#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;
const long long N = 1e9 + 7;

long long luythua(int a, int b) {
	if ( b==1 ) return a;
	else {
		long long x = luythua(a,b/2);
		if ( b%2==1 ) return (x * x%N) * a % N;
		else return  x * x % N;
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n,k;
		cin >> n >> k;
		cout << luythua(n,k) << endl;
	}
	

}

// code by Manh.


