#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int ktra ( long long n) {
	int x=n,y=0;
	int sum = 0;
	while ( n>0 ) {
		y = y*10 + n%10;
		sum += n%10;
		n/=10;
	}
	if ( x==y && sum%10==0 ) return 1;
	else return 0;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		long long dem = 0;
		for ( long long i=pow(10,n-1); i<pow(10,n); i++) {
			if ( ktra(i)==1 ) dem++;
		}
		cout << dem << endl;
	}

}

// code by Manh.


