#include <iostream>
using namespace std;

void quick_sort( int a[], int left, int right) {
	int i = left;
	int j = right;
	int pivot = a[ (left+right)/2 ];
	while ( i<=j ) {
		while ( a[i] < pivot ) i++;
		while ( a[j] > pivot ) j--;
		if ( i<=j ) {
			swap( a[i], a[j] );
			i++;
			j--;
		}
	}
	if ( left < j ) quick_sort(a,left,j);
	if ( i < right ) quick_sort(a,i,right); 
}

main ()
{
	int n,k;
	cin >> n >> k;
	int a[n+1];
	long long sum1 = 0, sum2 = 0;
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
		sum1 += a[i];
	}
	quick_sort(a,1,n);
	for ( int i = 1; i<=k; i++) {
		sum2 += a[i];
	}
	long long ans = sum1 - 2*sum2;
	cout << ans;

}

// code by Manh.


