#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[100005],dem=1;
	cout<<"NHAP SO PHAN TU MANG: ";
	cin>>n;
	cout<<"NHAP MANG: ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if( a[i]==a[i+1] ){
			dem++;
		}
		else{
			cout<<"PHAN TU "<<a[i]<<" XUAT HIEN "<<dem<<" LAN."<<endl;
			dem=1;
		}
	}
	return 0;
}

// code by Manh

