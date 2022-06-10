#include <iostream>
#include <algorithm>
using namespace std;

int n, a[100];

void Init();
bool End();
void Next();
void Display();

main ()
{
	Init();
	while ( !End() ) {
		Display();
		Next();
	}
	Display();
}

void Init() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		a[i] = i;
	}
}

bool End() {
	for ( int i = 1; i < n; i++) {
		if ( a[i] < a[i+1] ) 
			return false;
	}
	return true;
}

void Display() {
	for ( int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void Next() {
	int vt1, vt2;
	for ( int i = n-1; i >= 1; i--) {
		if ( a[i] < a[i+1] ) {
			vt1 = i;
			break;
		}
	}
	for ( int i = n; i >= 1; i--) {
		if ( a[i] > a[vt1] ) {
			vt2 = i;
			break;
		}
	}
	swap( a[vt1], a[vt2] );
	int left = vt1 + 1;
	for ( int i = left; i <= left + (n-left)/2; i++) {
		swap( a[i], a[n-i+left] );
	}
}
// code by Manh.


