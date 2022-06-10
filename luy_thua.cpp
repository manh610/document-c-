#include <iostream>
using namespace std;
const long long M = 1e9+7;

long long power( int x, int y) {
	if ( y==0 ) return 1;
	long long a = power(x,y/2);
	if ( y%2 ) return (a*(a*(x%M)%M)%M)%M; 
	else return (a*a%M)%M;
}

main ()
{
	int n,m;
	cin >> n >> m;
	long long S = power(2,n) + power(3,m);
	while ( S >=10 ) {
		S/=10;
	}
	cout << S;
}

// code by Manh.


