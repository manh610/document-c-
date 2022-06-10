#include <iostream>
using namespace std;

int n, k, a[100];

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
	cin >> n >> k;
	for ( int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void Display() {
	for ( int i = 1; i <= k; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

bool End() {
	for ( int i = 1; i <= k; i++) {
		if ( a[i]!=n-k+i ) 
			return false;
	}
	return true;
}

void Next() {
	int i = k; 
	while ( a[i]==n-k+i ) i--;
	a[i]++;
	for ( int j = i + 1; j <= k; j++) {
		a[j] = a[i] + (j-i);
	}
}
// code by Manh.


