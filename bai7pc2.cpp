#include <iostream>
#include <algorithm>
using namespace std;
main ()
{
	int n;
	cin >> n;
	int A[n+2];
	for ( int i=0; i<n; i++) {
		cin >> A[i];
	}
	int t, j, tmp = 0;
 	for (int i = 0; i<n; i++) {
 		j = i - 1;
		 t = A[i];
 		while (t<A[j] && j >= 0) {
 			A[j + 1] = A[j];
 			j--;
 		}
 		A[j + 1] = t;
 		cout << "Buoc " << tmp << ": ";
 		for ( int dem=0; dem<=i; dem++) {
 			cout << A[dem] << " ";
		}
		tmp++;
		cout << endl;
 	}
}

// code by Manh.


