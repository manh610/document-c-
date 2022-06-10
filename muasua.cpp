#include <iostream>
using namespace std;
main ()
{
	long long a,b,c;
	cin >> a >> b >> c;
	long long ans = 0;
    while ( c>=a ) {
        long long mua = c/a;
        ans += mua;
        c = c%a;
        c = c + mua*b;
        cout << c  << " " << mua << endl;
    }
	cout << ans;
}

// code by Manh.


