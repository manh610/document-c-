#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a>b) return a;
	else return b;
}

int main ()
{
	int a[100],n;
	cin>>n;
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
	}
	int s=0,maxsum=0;
	for ( int i=1; i<=n; i++) {
		s+=a[i];
		if ( s<0 ) s=0; 
		maxsum=max(s,maxsum);
	}
	cout<<maxsum;
	return 0;
}

// code by Manh.

