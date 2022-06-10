#include <iostream>
using namespace std;
main ()
{
	int s,x;
	cin >> s >> x;
	int a[10];
	for ( int i = 1; i<=5; i++) {
		cin >> a[i];
	}
	int tmp = s*x;
	for ( int i = 1; i<=5; i++) {
		cout << a[i] - tmp << " ";
	}
}

// code by Manh.


