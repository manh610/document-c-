#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n+2];
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int dem1=0,dem2=0,dem3=0,dem4=0;
	for ( int i=1; i<=n; i++) {
		if ( a[i]==1 ) dem1++;
		if ( a[i]==2 ) dem2++;
		if ( a[i]==3 ) dem3++;
		if ( a[i]==4 ) dem4++;
	}
	int dem=0;
	while ( 1 ) {
		if ( dem1==0 || dem3==0 ) break;
		dem++;
		dem1--;
		dem3--;
	}
	if ( dem2>=2) {
		dem+=dem2/2;
		dem2%=2;
	}
	if ( dem2==1 && dem1>=2 ) {
		dem++;
		dem2=0;
		dem1-=2;
	}
	if ( dem1%4==0 ) dem+=dem1/4;
	else dem+=dem1/4+1;
	cout<<dem+dem4+dem3+dem2;
	return 0;
}

// code by Manh.

