#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		int i=2;
		while ( n!=1 ){
			while ( n%i==0 ) {
				n/=i;
				cout << i << " ";
			}
			i++;
		}
		cout << endl;
	}
}

// code by Manh.


