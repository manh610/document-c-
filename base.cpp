#include <iostream>
#include <cstring>
using namespace std;
main ()
{
	int b,n;
	cin >> b >> n;
	int ans = 0,j=0;
	string s;
	while ( n>0 ) {
		int du = n%b;
		s[j] = du + '0';
		n/=b;
		j++;
	}
	cout << s;
}

// code by Manh.


