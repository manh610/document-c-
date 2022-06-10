#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int a[100][100];
int b[100][100];
int c[100][100];
int main()
{
	int m,n,a,b,i,j;
	cout<<"NHAP KICH THUOC MA TRAN 1: ";
	cin>>m>>n;
	cout<<"NHAP MA TRAN 1: "<<endl;
	for(int i=1;i<=m;++i) {
		for(int j=1;j<=n;++j) {
			cin>>a[i][j];
		}
	}
	cout<<"NHAP KICH THUOC MA TRAN 2: ";
	cin>>a>>b;
	cout<<"NHAP MA TRAN 2: "<<endl;
	for(int i=1;i<=a;++i) {
		for(int j=1;j<=b;++j) {
			cin>>b[i][j];
		}
	}
	if( n!=a ) {
		cout<<"KHONG NHAN DUOC HAI MA TRAN NAY.";
	}
	else {
		for(int i=1;i<=m;++i) {
			for(int j=1;j<=b;++j) {
				c[i][j]=a[i][j]*b[i][j];
			}
		}
	}
	for(int i=1;i<=m;++i) {
		for(int j=1;j<=b;++j) {
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// code by Manh

