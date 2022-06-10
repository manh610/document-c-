#include <iostream>
#include <cmath>
using namespace std;
const int N = 200000;

long long max(long long a, long long b) {
	if ( a>b ) return a;
	else return b;
}

main ()
{
	int n,a[N];
	cin >> n;
	long long s = 0;
	for ( int i=1; i<=n; i++) {
		cin >> a[i];
		s+=a[i];
	}
	float x = 1.0*s/n;
	float sum = 0,ans = 0,sum1=0;
	for ( int i=1; i<=n; i++){
		sum += (a[i] - x);
		sum1 += (a[i] -x);
		ans = max(max ( ans, abs(sum)),abs(sum1));
		if ( sum<0 ) sum = 0;
		if ( sum1>0 ) sum1=0;
	}
	printf ("%.6f",ans);
}

// code by Manh.

