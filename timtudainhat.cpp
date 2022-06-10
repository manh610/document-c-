#include <iostream>
#include <cstring>
using namespace std;

void tim(char s[])
{
	int dem = 0,j,vitri,max = 0;
	int n = strlen(s);
	for ( int i=0; i<=n; i++) {
		if ( (s[i]==' ') || (s[i]=='\0') ) {
			j = i-1;
			dem = 0;
			while ( s[j]!=' ' && j>=0 ) {
				dem++;
				j--;
			}
			if ( max < dem ) {
				max = dem;
				vitri = i;
			}
		}
	}
	cout << "TU DAI NHAT LA : ";
	for ( int i=vitri-max; i<vitri; i++) {
		cout << s[i];
	}
	cout<< " CO " << max << " KY TU.";
}

main ()
{
	char s[100];
	cout << "NHAP CHUOI : ";
	gets(s);
	tim(s);
}

// code by Manh.


