#include <iostream>
#include <algorithm>
using namespace std;

int min(int a, int b) {
	return (a<b)?a:b;
}

main ()
{
	int a[5];
	for (int i = 1; i<=4; i++) {
		cin >> a[i];
	}
	sort(a+1,a+5);
	int rong = min(a[1],a[2]);
	int dai = min(a[3],a[4]);
	cout << rong*dai;
}

// code by Manh.


