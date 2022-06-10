#include <iostream>
#include <cstring>
using namespace std;

main ()
{
	char s[50];
	cout << "NHAP XAU : ";
	gets(s);
	while ( s[0]==' ' ) {
		strcpy(&s[0],&s[1]);
	}
	while ( s[strlen(s)-1]==' ' ) {
		strcpy(&s[strlen(s)-1],&s[strlen(s)]);
	}
	for ( int i=1; i<strlen(s); i++) {
		if ( s[i]==' ' && s[i+1]==' ' ) {
			strcpy(&s[i],&s[i+1]);
			i--;
		}
	}
	char str[50];
	strcpy(str,s);
	char x,s1[50][10],*p;
	int dem = 0;
	cout << "NHAP KI TU X: ";
	cin >> x;
	p = strtok(str," ");
	int i=0;
	while (p!='\0'){
		strcpy(s1[i],p);
		i++;
		p = strtok('\0'," ");
	}
	for ( int j = 0; j<i; j++) {
		for ( int k=0; k<strlen(s1[j]); k++) {
			if ( s1[j][k]==x ) {
				dem++;
				break;
			}
		}
	}
	cout << "SO TU CHUA KI TU X : " << dem << endl;
	cout << "CHUAN HOA : " << s;
	
}

// code by Manh.


