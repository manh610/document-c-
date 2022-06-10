#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int a[100],n,check = 0;

void Init() {
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		a[i] = 0;
	}
}

void Result() {
	for ( int i = 1; i<=n; i++ ) {
		cout << a[i];
	}
	cout << endl;
}

void Next_binary() {
	int i = n;
	while ( i>0 && a[i]!=0 ) {
		a[i] = 0;
		i--;
	}
	a[i] = 1;
}

bool End() {
	for ( int i = 1; i <=n ; i++) {
		if ( a[i]==0 ) return false;
	}
	return true;
}
main ()
{
	int n;
	Init();
	while ( !End() ) {
		Result();
		Next_binary();
	}
	Result();

}

// code by Manh.


