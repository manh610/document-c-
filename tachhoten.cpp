/**************************

------TACH HO TEN------

**************************/
#include <iostream>
#include <cstring>
using namespace std;
main ()
{
	char str[50],s[10][10];
	cout << "MOI BAN NHAP HO TEN : ";
	gets(str);
	char *p;
	int i = 0;
	p = strtok(str, " ");
	while ( p!='\0') {
		strcpy(s[i], p);
		i++;
		p = strtok('\0', " ");
	}
	cout << "HO : " << s[0] << endl;
	cout << "DEM : ";
	for ( int j=1; j<=i-2; j++) {
		cout << s[j] << " ";
	}
	cout << endl << "TEN : "<< s[i-1];
}

// code by Manh.


