#include <iostream>
using namespace std;
main ()
{
	int n;
	cin >> n;
	string s[n+1];
	for ( int i = 1; i<=n; i++) {
		cin >> s[i];
	}
	int dem1 = 0, dem2 = 0;
	string a = s[1];
	string b;
	for ( int i = 1; i<=n; i++) {
		if ( s[i]!=a ) b = s[i];
		if ( s[i] == a ) dem1++;
		else dem2++;
	}
	if ( dem1 > dem2 ) cout << a;
	else cout << b;
}

// code by Manh.


