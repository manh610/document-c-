#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[10005];
	int min=1000000,max=0;
	cin>>n;
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
		if ( a[i]>max ) max = a[i];
		if ( a[i]<min ) min = a[i];
	}
	int dem=0;
	for ( int i=1; i<=n; i++) {
		if ( a[i]==max || a[i]==min || a[i]==1.0*(max+min)/2 ) {
			dem++;
		}
		else {
			cout<<"NO";
			break;
		}
	}
	if ( dem==n ) cout<<"YES";
	return 0;
}

// code by Manh
