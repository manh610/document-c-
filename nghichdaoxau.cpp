#include <iostream>
#include <cstring>
using namespace std;
main ()
{
	char s[100];
	cout << "NHAP XAU : ";
	gets(s);
	char s1[50][10],*p,i=0;
	p = strtok(s," ");
	while ( p!='\0') {
		strcpy(s1[i],p);
		i++;
		p = strtok ('\0'," ");
	}
	cout << "XAU MOI : ";
	for ( int j=i-1; j>=0; j--) {
		cout << s1[j] << " ";
	}
}

// code by Manh.


