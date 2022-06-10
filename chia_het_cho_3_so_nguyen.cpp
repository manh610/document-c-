#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long LCM(long long x, long long y, long long z)
{
	long long ans = ((x * y) / (__gcd(x, y)));
	return ((z * ans) / (__gcd(ans, z)));
}

long long Solve(long long n, long long x, long long y, long long z)
{
	long long lcm = LCM(x, y, z);

	long long ndigitnumber = pow(10, n-1);
	
	long long reminder = ndigitnumber % lcm;

	if (reminder == 0)
		return ndigitnumber;

	ndigitnumber += lcm - reminder;
	if (ndigitnumber < pow(10, n))
		return ndigitnumber;
	else
		return 0;
}

int main()
{
	int test; cin >> test;
	while ( test-- ) {
		int x,y,z,n;
		cin >> x >> y >> z >> n;
		long long res = Solve(n,x,y,z);
		if ( res==0 ) cout << "-1" << endl;
		else cout << res << endl;
	}
	return 0;
}

