#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	gets(s);
	char t[100];
	scanf("%s",t);
	char a[1000][100];
	int i = 0;
	char *p = strtok(s," ");
	while ( p!=NULL ) {
		strcpy(a[i],p);
		i++;
		p = strtok(NULL," ");
	}
	for ( int j = 0; j < i; j++) {
		if ( strcmp(a[j],t)!=0 )
			printf("%s ",a[j]); 
	}
	return 0;
}
