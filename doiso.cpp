#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{	
	char a[101];
	int k;
	cin>>a>>k;
	for ( int i=0; i<k; i++) {
		if ( a[i]<a[i+1] ) {
			int x = a[i+1];
			a[i+1] = a[i];
			a[i] = x;
		}
		else k++;
	}
	cout<<a;
	return 0;
}

// code by Manh

