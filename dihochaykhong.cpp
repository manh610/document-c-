#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

 int main ()
{
	int n,m,k;
	cin >> n >> m >> k;
	double x = 0.7*n-k;
	cout << x << endl;
	if ( x <= 0) x = 0;
	else if ( x > (n-m) ) cout << "-1" << endl;
	else if (x-int(x)!=0) x = int(x)+1;
	cout << x << endl;
	cout << 100*(k+(n-m))/n;
	return 0;
}

// code by Manh.

