#include <iostream>
#include <algorithm>
using namespace std;
const long long M = 1e9+7;

long long power( long long x, int y) {
	if ( y==0 ) return 1;
	long long a = power(x,y/2);
	if ( y%2 ) return (a*(a*(x%M)%M)%M)%M; 
	else return (a*a%M)%M;
}

long long tich(int a[], int n) {
	long long ans = 1;
	for ( int i = 1; i<=n; i++ ) {
		ans = (ans*a[i])%M;
	}
	return ans;
}

int gcd(int a[], int n) {
	int ans = a[1];
	for ( int i = 2; i<=n; i++) {
		ans = __gcd(ans,a[i]);
	}
	return ans;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {		
		int n, a[100];
		long long g,h;
		cin >> n;
		for ( int i = 1; i<=n; i++) 
			cin >> a[i];
		cout << power(tich(a,n),gcd(a,n)) << endl;
	}
}

// code by Manh.


