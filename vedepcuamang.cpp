#include <iostream>
//#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int ktra( int a[], int i, int n) {
	for ( int j = i; j<=n; j++) {
		if ( a[j] < a[j+1] ) return 0;
	}
	return 1;
}

long long tinh(int a[], int i, int n) {
	long long sum = 0;
	for ( int j =i; j<=n; j++) {
		sum += a[j];
	}
	return sum;
}

long long ans = 0;
int distance = 0;

void vedep(int a[], int i, int n) {
	int mid = ( n-i+1)/2;
	if ( ktra(a,i,n) ) {
		ans = max ( ans, tinh (a,i,n) );
		distance = n-i+1;
	}
	else {
		vedep(a,mid,n);
		vedep(a,i,mid);
	} 
	cout << distance << " " << ans;
}

main ()
{
	int n, a[10005] ; 
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
	}
	vedep(a,1,n);
	
	
}

// code by Manh.


