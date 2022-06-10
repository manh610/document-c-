#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

int count(int n)
{
	int N = 10;
	ll count = 1;
	for (int i=1; i<=n; i++)
	{
		count *= (N+i-1)%mod;
		count /= i;
	}
	return count%mod;
}

int main()
{
	int test; cin >> test;
    while ( test-- ) {
        int n; cin >> n;
        cout << count(n) << endl;
    }
	return 0;
}
