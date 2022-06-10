#include <iostream>
#include <string.h>
using namespace std;
int a[100];
int main ()
{
	string s;
	cin>>s;
	for(int i=1; i<=s.length()+1; i++){
		a[i] = s[i-1] -'0';
	}
	if ( (a[1]!=9) && (a[1]>4) ) a[1] = 9-a[1];
	for ( int i=2; i<=s.length()+1; i++) {
		if( a[i]>4 ) a[i] = 9 - a[i];
	}
	for ( int i=1; i<=s.length(); i++) {
		cout<<a[i];
	}
	return 0;
}

// code by Manh.

