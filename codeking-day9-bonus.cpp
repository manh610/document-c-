#include<bits/stdc++.h>
#define ll long long
using namespace std;

int id[2550],cnt,bit[20];
ll f[20][50][2550];

ll dfs(int pos,int sum,int lcm,bool flag) {
	if(!pos) return sum%lcm==0;
	if(!flag&&~f[pos][id[lcm]][sum]) return f[pos][id[lcm]][sum];
	ll ret=0;int lim=flag?bit[pos]:9;
	for(int i=0;i<=lim;i++) ret+=dfs(pos-1,(sum*10+i)%2520,i?lcm/__gcd(i,lcm)*i:lcm,flag&&(i==lim));
	if(!flag) f[pos][id[lcm]][sum]=ret;
	return ret;
}

ll cal(ll a) {
	int p=0;
	while(a) {
		bit[++p]=a%10;
		a/=10;
	}
	return dfs(p,0,1,1);
}

int main() {
	for(int i=1;i<=2520;i++) {
		if(2520%i==0) id[i]=++cnt;
	}
	memset(f,-1,sizeof f);
	int t;ll l,r;
	scanf("%d",&t);
	while(t--) {
		cin>>l>>r;
		cout<<cal(r)-cal(l-1)<<endl;
	}
	return 0;
}
