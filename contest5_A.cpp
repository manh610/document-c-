#include <iostream>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int a[n+5];
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int min;
	for ( int i=1; i<n; i++) {
		min=i;
		for ( int j=i+1; j<=n; j++) {
			if ( a[j]<a[min] ) {
				min = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
		cout<<"buoc "<<i<<" : ";
		for ( int k=1; k<=n; k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// code by Manh.

