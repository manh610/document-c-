//2.Cho m?ng m?t chi?u n ph?n t? nguy�n, nh?p v� in ra m�n h�nh xem m?ng c� bao nhi�u ph?n t? �m v� bao nhi�u ph?n t? duong.
#include <bits/stdc++.h>
#include <math.h>
#define N 10005
using namespace std;
int main()
{
	int n,a[N],dem1=0,dem2=0;
	cout<<"MOI NHAP SO PHAN TU CUA MANG: ";
	cin>>n;
	cout<<"MOI NHAP MANG: ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]>=0) dem1++;
		else dem2++;
	}
	cout<<"SO PHAN TU DUONG LA: "<<dem1<<endl;
	cout<<"SO PHAN TU AM LA: "<<dem2;
	return 0;
}

// code by Manh

