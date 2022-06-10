#include <iostream>
using namespace std;

int stop = 0, n = 5, k =3, C[50];

void In() {
	for ( int i= 1; i<= k; i++) {
		cout << C[i] << " ";
	}
	cout << endl;
}

void SinhTk() {
	int i = k;
	while ( C[i]==n-k+1 ) {
		i--;
	}
	if ( i==0 ) stop = 1;
	else {
		C[i]++;
		for ( int j = i+1; j<=k; j++) {
			C[j] = C[j-1] + 1; 
		}
	}
}

main ()
{
	// Thiet lap cau hinh dau tien
	for ( int i=1; i<=k; i++) C[i]=i;
	while ( !stop ) {
		In();
		SinhTk();
	}
}

// code by Manh.


