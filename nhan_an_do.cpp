#include <iostream>
using namespace std;

int nhan(int a, int b)
{
	if ( b==0 ) return 0;
	int t = nhan(a,b/2);
	return ( b%2 ) ? (t+t+a) : (t+t);
}

int luythua(int a, int b)
{
	if ( b==0 ) return 1;
	int t = luythua(a,b/2);
	return (b%2) ? (t*t*a) : (t*t);
}

main ()
{
	cout << nhan(3,4) << endl;
	cout << luythua(2,3);
}

// code by Manh.


