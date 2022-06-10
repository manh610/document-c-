#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE "ONLINE_JUDGE"
#define setIO() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define float double
#define all(x) (x).begin(),(x).end()
int powmod(int a,int b,int mod) {int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int pow2(int a,int b,int mod){ if (b==1) return a%mod;int tmp = pow2(a,b/2,mod);tmp=tmp*tmp%mod;if(b%2) return tmp*a%mod;return tmp;}
int gcd(int a,int b) {return b?gcd(b,a%b):a;}
int test = 1 , MULTI_TEST = 0; 
int n,dp[10001],v[10001], f[10001];
void Solve(){
    cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>f[i];
		while(f[i]%2==0)f[i]/=2,v[i]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		dp[i]=1;
		for(int j=1;j<i;j++)
			if(f[j]%f[i]==0&&(v[i]-i==v[j]-j||v[i]<=i-j-1))dp[i]=max(dp[i],dp[j]+1);
		ans=max(ans,dp[i]);
	}
	cout<<n-ans<<'\n';
}
 
main(){
    setIO();
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    if(MULTI_TEST == 1) cin >> test;
    for(int i = 1 ; i <= test ; i++){Solve();}
    return 0;
}
