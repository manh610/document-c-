#include <iostream>
using namespace std;
const int N=200005;
int main(){
	int a[N];
	int n;
	cin>>n;
	int check[n+4]={0};
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
		check[a[i]]++;
	}
	int dem=0;
	for ( int i=1; i<=n; i++) {
		if ( check[a[i]]!=1 ) {
			if ( i>=2 && a[i-1]<a[i] ) continue;
			for ( int j=1; j<=n; j++ ) {
				if ( check[j]==0 ) {
					a[i]=j;
					check[a[i]]++;
					dem++;
					break;
				}
			}
		}
	}
	cout<<dem<<endl;
	for ( int i=1; i<=n; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}

