#include <iostream>
using namespace std;
main ()
{
	long long n;
	cin >> n;
	int a[20], i = 0;
	while(n>0) {
		i++;
		a[i] = n%1000;
		n/=1000;
	}
	for ( int j = i; j>=1; j--) {
		cout << a[j];
		if ( j!=1 ) cout << ",";
	}
}

// code by Manh.


