#include <iostream>
using namespace std;

int a[100];

void khoitao(int a[100],int n){
	for(int i=0;i<n;i++){
		a[i]=0;
	}
}

void in(int a[100],int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

int kt(int a[100],int n,int k){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==1 && a[i+1]==1) dem++;
	}
	if(dem==k-1) return 1;
	return 0;
}

void next(int a[100],int n) {
	for(int i=n-1;i>=0;i--) {
		if(a[i]==0){
			a[i]=1;
			for(int k=i+1;k<n;k++){
				a[k]=0;
			}
			break;
		}
	}
}

int final(int a[100],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==1) dem++;
	}
	if(dem==n) return 1;
	return 0;
}

void nhiphan(int a[100],int n,int k){
	while(final(a,n)==0){
		next(a,n);
		if(kt(a,n,k)==1) in(a,n);
	}
}

main(){
	int n,k;
	cout<<"nhap n,k lan luot la: ";
	cin>>n>>k;
	khoitao(a,n);
	nhiphan(a,n,k);
}
