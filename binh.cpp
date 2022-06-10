#include <stdio.h>
#include <string.h>
int main ()
{
	char s[100];
	gets(s);
	int a=strlen(s);
	for ( int i=0; i<=a; i++) {
		printf("%c ",s[i]);
	}
	return 0;
}


