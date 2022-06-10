#include <iostream>
#include <cmath>
//#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int a,b;
	cin >> a >> b;
	int count = 0;
    for ( long long i = a; i<=b; i++) {
        long long x = sqrt(i);
        if ( x*x==i ) count++; 
    }
    cout << count;
}

// code by Manh.


