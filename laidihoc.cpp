#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int n,m,k;
	cin >> n >> m >> k;
	double x = 0.7*n-k;
	if ( x <= 0 ) cout << "0" << endl;
	else {
		if ( x > ( n-m ) ) cout << "-1" << endl;
		else if ( x == (n-m) ) cout << x << endl;
		else {
			cout << int (x)+1<<endl; 
		}
	}
	cout <<  100*(k+(n-m))/n;
}

// code by Manh.



