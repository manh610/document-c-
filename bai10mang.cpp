//10.2 mang hop nhau
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int n,a[100005],b[100005],ktra=1;
	cout<<"MOI NHAP SO PHAN TU CUA 2 MANG: ";
	cin>>n;
	cout<<"MANG 1: ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<"MANG 2: ";
	for(int j=1;j<=n;j++){
		cin>>b[j];
	}
	for(int k=1;k<=n;k++){
		if(( a[k] % b[k] != 0 ) && ( b[k] % a[k] != 0 )){
			ktra=0;
			break;
		}
	}
	if( ktra==1 ) cout<<"HAI MANG HOP NHAU";
	else cout<<"HAI MANG KHONG HOP NHAU";
	return 0;
}

// code by Manh

