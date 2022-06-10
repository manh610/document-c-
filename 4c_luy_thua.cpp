#include <iostream>
using namespace std;
const long long M = 1e9 + 7;

int power(int a, long long b) {
	if ( b==1 ) return a;
	int x = power(a,b/2);
	if ( b%2==0 ) return (x*(x%M))%M;
	else return (a*(x*(x%M)%M))%M;
}

main ()
{
	int a;
	long long b;
	while ( 1 ) {
		cin >> a >> b;
		if ( a==0 && b==0 ) break;
		cout << power(a,b) << endl;
	}

}

// code by Manh.


