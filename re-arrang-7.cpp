#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long int ll;

int so_chu_so(int a) {
	int n = 0;
	while ( a>0 ) {
		a/=10;
		n++;
	}
	return n;
}

int ghep(int a, int b) {
	int n = so_chu_so(b);
	a *= pow(10,n);
	a+=b;
	return a;
}

int cmp(int a, int b) {
	return (ghep(a,b) > ghep(b,a));
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int a[n+4];
		for ( int i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n,cmp);
		for ( int i = 0; i < n; i++) cout << a[i];
		cout << endl;
	}
}

// code by Manh.

