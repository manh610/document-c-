#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(),(x).end()

int powmod(int a,int b,int mod) {int res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
int gcd(int a,int b) {return b?gcd(b,a%b):a;}
 
#define MAX 100001 
int prime[MAX], countdiv[MAX]; 
void Sang() 
{ 
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i * i <= MAX; ++i) { 
        if (!prime[i]) 
            for (int j = i * 2; j <= MAX; j += i) 
                prime[j] = i; 
    } 
    for (int i = 1; i < MAX; ++i) 
        if (!prime[i]) 
            prime[i] = i; 
} 
 
int Xuly(int arr[], int n) 
{ 
    int ans = 0; 
    for (int i=0; i < n; ++i) 
    { 
        int element = arr[i]; 
        while (element > 1) 
        { 
            int div = prime[element]; 
            ++countdiv[div]; 
            ans = max(ans, countdiv[div]); 
            while (element % div==0) 
                element /= div; 
        } 
    } 
    if(ans==0) ans++;
    return ans; 
}  
 
int n, a[MAX];
void Solve(){
	cin >>n;
	for(int i=0; i<n;i++) cin>>a[i];
	cout<<Xuly(a,n);
}
 
main(){
	Sang();
	Solve();
}

// code by Manh
