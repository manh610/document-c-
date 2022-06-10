#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[1005],b[1005]={0};
	for ( int i=1; i<=n; i++) {
		cin>> a[i];
	}
	sort(a+1,a+n+1);
	int dem=0;
	for ( int i=1; i<n; i++) {
		for ( int j=i+1; j<=n; j++) {
			if ( a[i]<a[j] && b[j]==0 ) {
				dem++;
				b[j]=1;
				break;
			}
		}
	}
	cout<<dem;
	return 0;
}

// code by Manh.


