#include <stdio.h>
#include <string.h>
int main()
{
	char str[105];
	gets(str);
	int i;
	for ( i = 0; i < strlen(str); i++) {
		if ( str[i]!=' ') 
			printf("%c",str[i]);
		if ( str[i]!=' ' && str[i+1]==' ')
			printf("\n");
	}
	return 0;
}
