#include <iostream>
using namespace std;

int tach(int n){
	int s;
	while ( n>0 ) {
		s += n%10;
		n/=10;
	}
	return s;
}

int ktra(int n) {
	if ( ( (n%4==0) && (n%10!=0) )|| (n%400==0) ) return 1;
	return 0;
}

main ()
{
	int n;
	cin >> n;
	if ( ktra(n) ) cout << 3584 + 365*tach(n);
	else cout << 366*tach(n) + 3597;

}

// code by Manh.


