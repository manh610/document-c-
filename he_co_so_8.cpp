#include <stdio.h>
#include <string.h>
int main()
{
	char s[105];
	scanf("%s",&s);
	int n = strlen(s);
	if ( n%3==1 ) {
		printf("%c",s[0]);
		for ( int i = 1; i < n; i+=3 ) {
			int tmp = (s[i]-48)*4 + (s[i+1]-48)*2 + (s[i+2]-48);
			printf("%d",tmp);
		}
	} else if ( n%3==2 ) {
		int tmp = (s[0]-48)*2 + (s[1]-48);
		printf("%d",tmp);
		for ( int i = 2; i < n; i+=3 ) {
			int tmp = (s[i]-48)*4 + (s[i+1]-48)*2 + (s[i+2]-48);
			printf("%d",tmp);
		}
	} else {
		for ( int i = 0; i < n; i+=3 ) {
			int tmp = (s[i]-48)*4 + (s[i+1]-48)*2 + (s[i+2]-48);
			printf("%d",tmp);
		}
	}
	return 0;
}
