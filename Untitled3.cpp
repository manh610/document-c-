//Code By PMD
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define whatis(a) cout << #a " is " << (a) << endl;
using namespace std;
 
typedef long long i64;
const int N = 100005;
const i64 mod = 1e9+7;
const i64 inf = 1e18+7;
 
void solve() {
	int n,s,res=0;
	cin >> n >> s;
	int a[n+2];
	for(int i=0;i<=n;i++) a[i]=i;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			int x = s-(a[i]+a[j]);
			if(0 <= x && x <= a[n]){
			//	cout << a[i] <<' ' <<a[j] << ' ' << x <<endl;
				res++;
			}
		}
	}
	cout << res ;
}
main(){
	IOS;
	int t=1;
	//cin>>t;
	while(t--){
		solve();
	}
}
//Code By PMD
 
