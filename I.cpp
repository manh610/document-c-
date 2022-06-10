#include <iostream>
using namespace std;
int main ()
{
	int n,k;
	cin>>n>>k;
	int a[n+5];
	int y=0,m=0;
	int dem1=0,dem2=0;
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for ( int i=1; i<=n; i++) {
		if (y>=k) break;
		y+=a[i];
		dem1++;
	}
	for ( int i=n; i>=1; i--) {
		if (m>=k) break;
		m+=a[i];
		dem2++;
	}
	if ( dem1>dem2 ) cout<<"Yan";
	else if ( dem1==dem2 ) cout<<"Empate";
	else cout<<"Nathan";
	return 0;
}

// code by Manh.

