#include <iostream>
using namespace std;

void nhap(int a[], int &n) {
	cout << "moi ban nhap so phan tu: ";
	cin >> n;
	for ( int i=1; i<=n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void sort(int a[], int &n) {
	for ( int i=1; i<n; i++) {
		for ( int j=i+1; j<=n; j++) {
			if ( a[i] > a[j] ) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void xuat(int a[], int &n) {
	cout << "mang sau khi sap xep la: ";
	for ( int i=1; i<=n; i++){
		cout << a[i] << "  ";
	}
}

int search( int a[], int &n, int &x) {
	int l = 1, r = n;
	while ( l<=r ) {
		int mid = (l+r)/2;
		if ( a[mid] == x ) return mid;
		else if ( a[mid] > x ) {
			r = mid -1; 
		}
		else l = mid +1;
	}
	return 0;
}

main ()
{
	int a[100],n,x;
	nhap(a,n);
	sort(a,n);
	xuat(a,n);
	cout << endl << "moi ban nhap phan tu muon tim kiem: ";
	cin >> x;
	if ( search(a,n,x) ) {
		cout << "vi tri: " << search(a,n,x);
	}
	else cout << "khong co mat";
}

// code by Manh.

