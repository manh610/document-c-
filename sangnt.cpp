#include <bits/stdc++.h>
#include <math.h>
using namespace std;
const int M = 1e6;
int mark[M+5];
int main()
{
	mark[0]=1;
	mark[1]=1;
	for(int i =2 ; i*i<=M ; i++) {
		if(!mark[i]) {
			for( int j = i*i ; j <= M ; j += i) {
				mark[j] = 1;
			}
		}
	}
	int n;
	int u,v,dem=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>u>>v;
		for(int j=u;j<=v;j++){
			if(mark[j]==0) dem++;
		}
		if(dem==0){
			cout<<dem<<endl<<"-1";
		}
		else{
			cout<<dem<<endl;
			for(int j=u;j<=v;j++){
				if(mark[j]==0) 
				cout<<j<<" ";
			}
		}
		cout<<endl;
		dem=0;
	}
	return 0;
}

// code by Manh

