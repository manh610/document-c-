#include <stdio.h>
#include<string.h>
int main()
{
	long long test;
	scanf("%lld",&test);
	fflush(stdin);
	while ( test-- ) {
		char str[205];
		gets(str);
		int count = 0,i;
		for ( i = 1; i < strlen(str); i++ ) {
			if (str[i-1]==' ' && str[i]!=' ') 
				count++;
		}
		printf("%d\n",(str[0]==' ')?count:count+1);
	}
	return 0;
}
