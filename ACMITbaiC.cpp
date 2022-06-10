#include <iostream>
using namespace std;
const int N = 1e5;

int max( int a, int b) {
	if ( a>b ) return a;
	else return b;
}

int main(){
	int a[N];
	int n;
	cin>>n;
	long long s=0,maxs=0;
	for ( int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for ( int i=1; i<=n; i++) {
		s+=a[i];
		if ( s<0 ) s=0;
		maxs=max(maxs,s);
	}
	cout<<maxs;
	return 0;
}
