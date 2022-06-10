#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,a[10005];
	float min=1000000,max=0;
	cin>>n;
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
		if ( a[i]>max ) max = a[i];
		if ( a[i]<min ) min = a[i];
	}
	int dem=0;
	for ( int i=1; i<=n; i++) {
		if ( a[i]==max || a[i]==min || a[i]==(max+min)/2 ) {
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

