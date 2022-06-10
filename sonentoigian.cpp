#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int nen(int n)
{
	int b=0;
	while( n>0 ){
		b=b+n%10;
		n=n/10;
	}
	return b;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a;
		int k;
		k=nen(a);
		while(k>=10){
			b=k;
			k=nen(b);
		}
		cout<<k<<endl;
	}
	return 0;
}

// code by Manh

