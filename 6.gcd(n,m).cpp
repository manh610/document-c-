#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long sum=(n*n+n)/2;
		if(m>sum){
			cout<<"NO";
		}
		else{
			if(sum%2 == m%2){
				long long x=(sum+m)/2,y=(sum-m)/2;
				if(__gcd(x,y)==1){
					cout<<"YES";
				}
				else{
					cout<<"NO";
				}
			}
			else{
				cout<<"NO";
			}
		}
		cout<<endl;
	}
	return 0;
}
//Code by Manh

