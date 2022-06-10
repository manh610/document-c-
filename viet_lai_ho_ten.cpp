#include <stdio.h>
#include <string.h>

void in(char s[][100], int i) {
	if ( s[i][0] > 96 ) s[i][0] -= 32;
	printf("%c",s[i][0]);
	for ( int j = 1; j < strlen(s[i]); j++) {
		if ( s[i][j] < 97 ) s[i][j]+=32;
		printf("%c", s[i][j]);
	}
}

int main()
{
	int test;
	scanf("%d",&test);
	fflush(stdin);
	while ( test-- ) {
		char s[1000];
		gets(s);
		char a[100][100];
		char *p = strtok(s," ");
		int i = 1;
		while ( p!='\0' ) {
			strcpy(a[i], p);
			i++;
			p = strtok('\0', " ");
		}
		in(a,i-1);
		printf(" ");
		in(a,1);
		printf("\n");
		
	}
	return 0;
}
