#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int du7 = n/7;
	int tmp = n%7;
	if ( tmp%4==0 ) {
		for ( int i = 1; i<=tmp/4; i++) {
			cout << "4";
		}
		for ( int i = 1; i<=du7; i++) {
			cout << "7";
		}
	}
	else {
		int check = 0;
		while ( du7>0 ) {
			du7--;
			tmp = n-du7*7;
			if ( (n-du7*7)%4==0 ) {
				for ( int i = 1; i<=tmp/4; i++) {
					cout << "4";
				}
				for ( int i = 1; i<=du7; i++) {
					cout << "7";
				}
				check = 1;
				break;
			}
		}
		if ( check==0 ) cout << "-1";
	}

}

// code by Manh.


