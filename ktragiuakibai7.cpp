#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n+5];
	for ( int i=0; i<n; i++) {
		cin>>a[i];
	}
	int max=a[0],max2=a[0],d1,d2;
	for ( int i=1; i<n; i++) {
		if ( a[i]>max ) max=a[i];
	}
	for ( int i=0; i<n; i++) {
		if ( a[i]==max ) {
			d1=i;
			break;
		}
	}
	cout<<"phan tu lon nhat la "<<max<<" o vi tri "<<d1<<endl;
	for ( int i=1; i<n; i++) {
		if ( a[i]!=max ) {
			if ( a[i]>max2 ) max2=a[i];
		}
	}
	for ( int i=0; i<n; i++) {
		if ( a[i]==max2 ) {
			d2=i;
			break;
		}
	}
	cout<<"phan tu lon thu 2 la "<<max2<<" o vi tri "<<d2;
	return 0;
}

// code by Manh.

