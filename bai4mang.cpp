//4.Cho m?ng 1 chi?u g?m n ph?n t? nguy�n, ki?m tra v� in ra m�n h�nh nh?ng ph?n t? l� s? nguy�n t? ho?c l� s? ch�nh phuong.
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int songto(int n){
	if( n==0 || n==1 ) return 0;
	else if( n==2 || n==3) return 1;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if( n%i==0 ) return 0;
		}
	}
	return 1;
}
int sochinhphuong(int n){
	int x;
	x=1.0*sqrt(n);
	if( pow(x,2)-n==0 ) return 1;
	else return 0;
}
int main()
{
	int n,a[100005];
	cout<<"NHAP N: ";
	cin>>n;
	cout<<"NHAP MANG: ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		if( songto(a[j])==1 ) cout<<a[j]<<" ";
		if( sochinhphuong(a[j])==1 ) cout<<a[j]<<" ";
	}
	

	return 0;
}

// code by Manh

