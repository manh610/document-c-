#include <iostream>
#include <string.h>
using namespace std;
int main ()
{	
	string s;
	cin>>s;
	int a=s.length();
	int dem=0;
	for ( int i=0; i<a; i++) {
		dem++;
		if (s[i]!=s[i+1]) {
			cout<<s[i]<<dem;
			dem=0;
		}
	}
	return 0;
}

// code by Manh.

