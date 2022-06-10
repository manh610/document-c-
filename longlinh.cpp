#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int a[10000];
int main()
{
	int n,x,dem=0;
	cout<<"NHAP SO PHAN TU CUA MANG: ";
	cin>>n;
	cout<<"NHAP MANG: ";
	for(int i=1;i<=n;++i) {
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
		cout<<endl;
	}
	cout<<"NHAP X: ";
	cin>>x;
	for(int i=1;i<=n;++i) {
		if( a[i]==x ) dem++;
	}
	cout<<"PHAN TU "<<x<<" XUAT HIEN "<<dem<<" LAN.";
	return 0;
}

// code by Manh

