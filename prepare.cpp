#include <iostream>
using namespace std;

int n,k, a[100];
bool chuaxet[100];

void init();
void back(int i);
void result();

int main() {
	init();
	back(1);
}

void back( int i) {
	for ( int j = 1; j <= n; j++) {
		if ( chuaxet[j] ) {
			a[i] = j;
			chuaxet[j] = false;
			if ( i==n ) 
				result();
			else
				back(i+1);
			chuaxet[j] = true;
		}
	}
}

void result() {
	for ( int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void init() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		chuaxet[i] = true;
	}
}
