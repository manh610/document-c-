#include <iostream>
#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	fflush(stdin);
	while ( test-- ) {
		char ten[100];
		gets(ten);
		while ( ten[0]==' ' ) {
			strcpy(&ten[0],&ten[1]);
		}
		while ( ten[strlen(ten)-1]==' ' ) {
			strcpy(&ten[strlen(ten)-1],&ten[strlen(ten)]);
		}
		for ( int i=1; i<strlen(ten); i++) {
			if ( ten[i]==' ' && ten[i+1]==' ' ) {
				strcpy(&ten[i],&ten[i+1]);
			i--;
			}
		}
		strlwr(ten);
		ten[0]-=32;
		for ( int i=1; i<strlen(ten); i++) {
			if (ten[i]==' ') ten[i+1] -= 32;
		}
		cout << ten << endl;
	}
}

// code by Manh.


