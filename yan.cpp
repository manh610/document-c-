#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n;
	int a[n+5],b[n+5],c[n+5];
	cin>>n;
	for ( int j=1; j<=n; j++) {
		cin>>a[j];
	}
	for ( int i=1; i<=n; i++) {
		cin>>b[i];
	}
	for ( int i=1; i<=n; i++) {
		cin>>c[i];
	}
	float y,m;
	for ( int i=1; i<=n; i++) {
		y+=pow(a[i]-b[i],2);
		m+=pow(a[i]-c[i],2);
	}
	if ( y<=m ) cout<<"Yan";
	else cout<<"MaratonIME"; 
	
	return 0;
}

// code by Manh.

