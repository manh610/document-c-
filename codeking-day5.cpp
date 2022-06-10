#include<bits/stdc++.h>
#define M 1000000007
#define N 10000001
typedef long long int ll;
using namespace std;

int dp[N][4];

int main()
{
	int i, j, k;
	int n, m;
	cin >> n;
	ll a, b, c, d, x;
	dp[1][0] = dp[1][1] = dp[1][2] = 1,  dp[1][3] = 0;
	for (i = 2; i <= n; i++)
	{
		a = dp[i - 1][0] % M; b = dp[i - 1][1] % M;
		c = dp[i - 1][2] % M; d = dp[i - 1][3] % M;
		
		x = b + c + d;
		dp[i][0] = x % M;
		
		x = a + c + d;
		dp[i][1] = x % M;

		x = a + b + d;
		dp[i][2] = x % M ;

		x = a + b + c;
		dp[i][3] = x % M;
	}

	cout << dp[n][3];

	return 0;
}
