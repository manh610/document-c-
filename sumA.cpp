#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int sum(long long n, int m) {
	int ans = (((((1.0*n/6)%m)*((n+1)m))%m)*(2*n+1)%m)%m;
	return ans/6;
}

main ()
{
	int n;
	int m;
	cin >> n >> m;
	cout << sum(n,m);

}

// code by Manh.


