#include <iostream>
using namespace std;

int dem(long long n) {
	int dem = 0;
	while ( n>0 ) {
		int du = n%10;
		if ( du==4 || du==7 ) dem++;
		n/=10;
	}
	return dem;
}

main ()
{
	long long n;
	cin >> n;
	int tmp = dem(n);
	if ( tmp==4 || tmp==7 ) cout << "YES";
	else cout << "NO";

}

// code by Manh.


