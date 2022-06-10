#include <bits/stdc++.h>
using namespace std;

void nhap(int a[], int  &n) {
	// cout << "NHAP SO LUONG PHAN TU : ";
	cin >> n;
	// cout << "NHAP MANG : " << endl;
	for ( int i = 1; i<=n; i++) {
		// cout << "a[" << i << "] : ";
		cin >> a[i];
	}
	// cout << endl;
}

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

void xuat(int a[], int n) {
	// cout << "MANG MOI SAU KHI DA SAP XEP : ";
	for ( int i = 1; i<=n; i++) {
		cout << a[i] << " ";
	}
}

main ()
{
	int n, a[1005]; 
	nhap(a,n);
	quick_sort(a,1,n);
	xuat(a,n);
}

// code by Manh.


