#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
main ()
{
	ofstream file ("tungnui.txt");
	int n;
	cout << "moi ban nhap so sinh vien: ";
	cin >> n;
	int STT=1;
	char s[20];
	for ( int i=0; i<=n; i++) {
		if ( i!=0 ) {
			file << STT << " "; 
			STT++;
		}
		gets(s);
		file << s << endl;
	}
	file.close();
	
}

// code by Manh.

