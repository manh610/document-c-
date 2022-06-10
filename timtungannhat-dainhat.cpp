/*******************************************

--------TIM TU DAI NHAT VA NGAN NHAT--------

*******************************************/
#include <iostream>
#include <cstring>
using namespace std;
main ()
{
	char s[100];
	cout << "NHAP XAU : ";
	gets(s);
	int j,vtmax,vtmin,dem= 0,max = 0 ,min = 100;
	for ( int i=0; i<=strlen(s); i++) {
		if ( s[i]==' ' || s[i]=='\0' )  {
			j = i-1;
			while ( s[j]!=' ' && j>=0 ) {
				dem++ ;
				j--;
			}
			if ( max < dem ) {
				max = dem;
				vtmax = i;
			}
			if ( min > dem ) {
				min = dem;
				vtmin = i;
			}
			dem = 0;
		}
	}
	cout << "TU DAI NHAT LA : ";
	for ( int k = vtmax - max; k < vtmax; k++) {
		cout << s[k];
	}
	cout << " CO " << max << " KY TU";
	cout << endl << "TU NGAN NHAT LA : ";
	for ( int k = vtmin - min; k < vtmin; k++) {
		cout << s[k];
	}
	cout << " CO " << min << " KY TU";
}

// code by Manh.


