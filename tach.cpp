#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	char ten[40];
	int i=0;
	cout << "NHAP TEN : ";
	cin.getline( ten, 40);
	char *p = strtok( ten, " ");
	char str[6][10];
	while ( p != '\0') {
		strcpy ( str[i], p);
		i++;
		p = strtok ( '\0' , " ");
	}
	cout << "HO : " << str[0] << endl;
	cout << "DEM : ";
	for ( int j=1; j<= i-2; j++) cout << str[j] << " ";
	cout << endl << "TEN: " << str[i-1] ;

}

// code by Manh.

