#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int ktra(int n)
{
	if(n==0 || n==1) return 0;
	else if(n==2 || n==3) return 1;
	else for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;		
		}
	return 1;
}
int main()
{
	int a,b,dem=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if( ktra(i) ){
			int k=i;
			while( k>0 ){
				k=k/10;
				if( ktra(k)==0 ) break;
			}
			if(k==0){
				dem++;
				cout<<i<<endl;
			}
		}
	}
	if(dem==0) cout<<"-1";
	return 0;
}

// code by Manh

