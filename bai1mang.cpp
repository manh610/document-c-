//1.Vi?t chuong tr�nh nh?p v�o d�y n ph?n t? v� in ra c�c ph?n t? theo th? t? ngu?c l?i qu� tr�nh nh?p. S? nh?p d?u ti�n s? in ra sau c�ng.
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int n,a[100005];
	cout<<"MOI NHAP SO PHAN TU CUA MANG: ";
	cin>>n;
	cout<<endl;	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<"MANG DA DUOC VIET LAI LA: ";
	for(int i=n;i>=1;i--){
		cout<<a[i]<<" ";
	}
	return 0;
}

// code by Manh

