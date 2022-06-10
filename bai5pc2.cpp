#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int a[n+2];
	int tmp = 1;
	for ( int i = 0; i<n ; i++) {
		cin >> a[i];
	}
	for ( int i = 0; i<n-1; i++) {
		for ( int j = i + 1; j<n; j++) {
			if ( a[j] < a[i] ) swap(a[j], a[i]);
		}
		cout << "Buoc " << tmp << ": " ;
		for ( int i = 0; i<n; i++) {
			cout << a[i] << " ";
		}
		tmp++ ;
		cout << endl;
	}
}

// code by Manh.


