#include <iostream>
#include <cstring>
using namespace std;
typedef long long int ll;

void dao(char a[]) {
	int i = 0;
	char s[100][100], *p;
	p = strtok(a," ");
	while ( p!='\0') {
		strcpy(s[i],p);
		i++;
		p = strtok(NULL," ");	
	}
	while ( i>=0 ) {
		cout << s[i] << " ";
		i--;
	}
}

main()
{
	int test;
	cin >> test;
	cin.ignore();
	while ( test-- ) {
		char a[100];
		gets(a);
		dao(a);
		cout << endl;
	}
}

// code by Manh.

