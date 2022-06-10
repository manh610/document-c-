#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin >> n;
	for ( int i = 1 ; i <= n ; i++ ) {
		for( int j = 1 ; j <= 2*n-1 ; j++) {
			if( i == n) {
				cout << "* ";
				if ( j==n ) break;
			}
			else if( i + j == n+1) cout << "*";
			else if( j-i == n-1) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;
}

// code by Manh

