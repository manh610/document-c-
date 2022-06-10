#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0) printf("0");
	else printf("1");
	return 0;
}

// code by Manh.

