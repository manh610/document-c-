#include <stdio.h>
int main()
{
	int n;
	int x = 0;
	scanf("%d",&n);
	while(n--) {
		fflush(stdin);
		char s[10];
		scanf("%s",s);
		if ( s[1]=='+' ) x++;
		else x--;
	}
	printf("%d",x);
	return 0;
}
