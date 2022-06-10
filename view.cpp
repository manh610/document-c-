/********************

		PROBLEM 1 : cho day n so nguyen (n>1).
		Viet ham Rhythm {
			1 neu a1 = a2 = ... = an ---> bang
			2 neu a1 < a2 < ... < an ---> tang chat
			3 neu a1 <= a2 <= ... <= an ---> tang
			4 neu a1 > a2 > ... < an ---> giam chat
			5 neu a1 >= a2 >= ... >= an ---> giam
			0 neu khac tat ca ---> loi lom
		}
		
		THUAT TOAN LAC LO.

********************/

#include <iostream>
using namespace std;

int Rhythm ( int a[], int n) {
	int tang = 0, giam = 0;
	for ( int i=1; i<n ; ++i ) {
		if ( a[i] > a[i-1] ) tang ++;
		else if ( a[i] < a[i-1] ) giam ++;
	}
	/***************
	if ( tang > 0 ) {
		if ( bang > 0 ) return 3;
		if ( giam > 0) return 0;
		else return 2;
	}
	else if ( giam > 0 ) {
		if ( bang > 0 ) return 5;
		else return 4;
	}
	else return 1;
	*****************/
	// int bang = n - 1 - tang - giam;
	// if ( bang > 0 ) bang = 1;
	// if ( tang > 0 ) tang = 1;
	// if ( giam > 0 ) giam = 1;
	/*
	int ans = 4*(giam > 0) + 2*(tang > 0) + (bang > 0);
	if ( ans > 5 ) ans = 0;
	return ans; 
	*/
	tang = 4*(giam > 0) + 2*(tang > 0) + ( (n-1-tang-giam) > 0);
	return ( tang > 5 ) ? 0 : tang; 
	
}

main ()
{
	int a[100], n;
	cout << "SO LUONG PHAN TU : ";
	cin >> n;
	for ( int i=0; i<n; i++) {
		cout << "a[" << i << "] = " ;
		cin >> a[i] ;
		cout << endl;
	}
	cout << "DAY LA LOAI : ";
	if ( Rhythm(a,n) == 0 ) cout << "LOI LOM.";
	else if ( Rhythm(a,n) == 1 ) cout << "BANG.";
	else if ( Rhythm(a,n) == 2 ) cout << "TANG CHAT.";
	else if ( Rhythm(a,n) == 3 ) cout << "TANG.";
	else if ( Rhythm(a,n) == 4 ) cout << "GIAM CHAT.";
	else cout << "GIAM.";
}

// code by Manh.


