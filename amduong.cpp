#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[10005];
	cout<<"MOI BAN NHAP N: ";
	cin>>n;
	cout<<"MOI BAN NHAP MANG: ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<"MANG MOI LA: ";
	for(int j=1;j<=n && a[j]<=0;j++){
		cout<<a[j]<<" ";
	}
	for(int j=n;j>=1 && a[j]>0;j--){
		cout<<a[j]<<" ";
	}	
	return 0;
}

// code by Manh

