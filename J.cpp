#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n+5],b[n+5],c[n+5];
	for ( int i=1; i<=n; i++) {
		cin>>a[i]>>b[i]>>c[i];
	}
	float s=0;
	for ( int i=1; i<n; i++) {
		for ( int j=i+1; j<=n; j++) {
			s=pow(a[i]-a[j],2) + pow(b[i]-b[j],2);
			if (sqrt(s)<=c[i]+c[j]) cout<<i<<" "<<j;
			else s=0;
		}
	}
	return 0;
}

// code by Manh.

