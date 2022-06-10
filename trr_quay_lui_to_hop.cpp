#include <iostream>
#include <string.h>

using namespace std;

char a[100];
string str = "aetttoitmuhb";

void Try(int i);
void Result();



main ()
{
	int test;
	cin >> test;
	while ( test-- ) {	
		Try(1);
		cout << endl;
	}
}

void Try(int i) {
	for ( int j = 0; j<12; j++) {
		a[i] = str[j];
		if ( i==7 ) 
			Result();
		else 	
			Try(i+1);
	}
}

void Result() {
	for ( int i = 1; i <= 7; i++) {
		cout << a[i];
	}
	cout << " ";
}

// code by Manh.


