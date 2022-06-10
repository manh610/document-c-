#include <iostream>
#include <cstring>
using namespace std;
main ()
{
	char nhap[10];
	int a,b,c;
	gets(nhap);
	a = nhap[0] - '0';
	b = nhap[4] - '0';
	c = nhap[8] - '0';
	if ( a+b==c ) cout << "YES";
	else cout << "NO";

}

// code by Manh.


