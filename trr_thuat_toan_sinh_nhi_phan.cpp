#include <iostream>
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
		a[i] = 0;
	}
}

bool End() {
	for ( int i = 1; i<=n; i++) {
		if ( a[i]==0 ) 
			return false;
	}
	return true;
}

void Next() {
	int i = n;
	while ( a[i] ) {
		a[i] = 0;
		i--;
	}
	a[i] = 1;
}

void Display() {
	for ( int i = 1; i <= n; i++ ) {
		cout << a[i];
	}
	cout << endl;
}

// code by Manh.


