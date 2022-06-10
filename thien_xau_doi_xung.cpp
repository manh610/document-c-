#include <stdio.h>
#include <string.h>
int main()
{
	char a[100], b[100];
	scanf("%s",a);
	scanf("%s", b);
	strcat(a,b);
	int l = strlen(a);
	int check = 0;
	for ( int i = 0; i <= l/2; i++) {
		if ( a[i] != a[l-i-1] ) {
			check = 1;
			break;
		}
	}
	if ( check==1 ) printf("NO.");
	else printf("YES");
	return 0;
}
