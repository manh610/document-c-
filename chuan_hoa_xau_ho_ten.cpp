// chuan hoa xau ho ten

#include <stdio.h>
#include <string.h>

int main() 
{
	int test; scanf("%d", &test);
	scanf("\n");
	while ( test-- ) {
		char s[1000];
		gets(s);
		// tach tu trong chuoi
		char *p = strtok(s," ");
		while ( p!=NULL ) {
			if ( p[0]>='a' && p[0]<='z' ) 
				printf("%c",(char) p[0]-32);
			else
				printf("%c",p[0]);
			for ( int i = 1; i < strlen(p); i++) {
				if ( p[i]>='A' && p[i]<='Z' ) 
				printf("%c",(char) p[i]+32);
			else
				printf("%c",p[i]);
			} 
			printf(" ");
			p = strtok(NULL," ");
		}
		printf("\n");
	}
	return 0;
}
