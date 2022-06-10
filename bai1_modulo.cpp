#include <iostream>
#include <cmath>
using namespace std;

long long power1(int x, int y, long long p) {
	if ( y==0 ) return 1;
	long long tmp = power1(x,y/2,p);
	tmp = tmp*tmp % p;
	if ( y%2 ) tmp = tmp*x % p;
	return tmp;
}

void solve1() {
	int x,y;
	long long p;
	cin >> x >> y >> p;
	cout << power1(x,y,p);
}
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve1();
		cout << endl;
	}	
}

// code by Manh.


