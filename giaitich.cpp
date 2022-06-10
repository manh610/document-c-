#include <iostream>
#include <cmath>
using namespace std;

int ktra(int n);

int main ()
{
	int n;
	cout<<"MOI BAN NHAP N: ";
	cin>>n;
	cout<<"CAC UOC CUA N LA: ";
	int dem=0;
	for ( int i=1; i<=n; i++) {
		if ( n%i==0 ) {
			cout<<i<<" ";
			dem++;
		} 
	}
	cout<<endl<<"SO UOC LA: "<<dem<<endl;
	cout<<"CAC UOC NGUYEN TO LA: ";
	for ( int i=1; i<=n; i++) {
		if ( n%i==0 && ktra(i)==1 ) cout<<i<<" ";
	}
	return 0;
}

int ktra(int n){
	if ( n==0 || n==1 ) return 0;
	else if ( n==2 || n==3 ) return 1;
	else {
		for ( int i=2; i<=sqrt(n); i++) {
			if ( n%i==0 ) return 0;
		}
	}
	return 1;
}

// code by Manh.

