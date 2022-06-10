#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;

int X[50], chuaxet[50];

void In() {
	for ( int i=1; i<=n; i++) {
		cout << X[i] << " ";
	}
	cout << endl;
}

void Try(int i ) {
	int j;
	int sum = 0;
	for ( int t = 1; t<=n; t++) {
		for ( j =1; j<=n; j++) {
			if(chuaxet[j])
			sum += C[i][X[i]];
			if (sum==k) In();
			else Try(i+1);
		}
	}
}

main ()
{
	int n,k;
	cin >> n >> k;
	for ( int i=1; i<=n; i++) {
		for ( int j =1; j<=n; j++) {
			cin >> C[i][j];
		}
	}
	
}

// code by Manh.


