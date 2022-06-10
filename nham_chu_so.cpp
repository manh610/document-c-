#include <iostream>
#include <cmath>
using namespace std;

int so5(int n) {
	int s = 0;
	int M = 1e6;
	while ( M>=1 ) {
		int tmp = n/M;
		n = n%M;
		if ( tmp==6 ) tmp = 5;
		s = s*10 + tmp;
		M/=10;	
	}
	return s;
}

int so6(int n) {
	int s = 0;
	int M = 1e6;
	while ( M>=1 ) {
		int tmp = n/M;
		n = n%M;
		if ( tmp==5 ) tmp = 6;
		s = s*10 + tmp;
		M/=10;	
	}
	return s;
}

main ()
{
	int a,b;
	cin >> a >> b;
	int be, lon;
	be = so5(a) + so5(b);
	lon = so6(a) + so6(b);
	cout << be << " " << lon;	

}

// code by Manh.


