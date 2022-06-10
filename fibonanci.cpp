#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int n,f[100005];
	cout<<"NHAP N: ";
	cin>>n;
	f[1]=f[2]=1;
	for(int i=3;i<=n+1;i++){
		f[i] = f[i-1] + f[i-2];
	}
	for(int j=2;j<=n+1;j++){
		cout<<f[j]<<" ";
	}
	
	return 0;
}

// code by Manh

