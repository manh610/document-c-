#include <iostream>
#include <cmath>
using namespace std;
main ()
{
	int a,b,c;
	cin >> a >> b >> c;
	int tmp = ( a+b + abs(a-b) )/2;
	int max = ( tmp + c + abs(tmp-c) )/2;
	int tmp1 = ( a+b - abs(a-b))/2;
	int min = ( tmp1 + c - abs(tmp1-c))/2;
	cout << max << " " << min; 
}

// code by Manh.


