#include <iostream>
using namespace std;
typedef long long int ll;
main ()
{
	bool check[10000];
	for ( int i = 0; i <= 10000; i++) check[i] = true;
	check[0] = false;
	check[1] = false;
	for ( int i = 2; i <= 100; i++ ) {
		if ( check[i] ) {
			for ( int j = i*i ; j <= 10000; j += i) {
				check[j] = false;
			} 
		}
	}
	int test;
	cin >> test;
	while ( test-- ) {
		int a,b;
		cin >> a >> b;
		int dem = 0;
		for ( int i = a; i <= b; i++) {
			if ( check[i] ) {
				dem++;
			}
		}
		cout << dem << endl;
	}

}

// code by Manh.


