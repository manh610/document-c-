#include <stdio.h>
#include <string.h>

int thuan_nghich(char a[]) {
	int i = 0, j = strlen(a)-1;
	while ( i<=j ) {
		if ( a[i]!= a[j] ) 
			return 0;
		i++;
		j--;
	}
	return 1;
}

int main()
{
	char s[1005];
	char ans[1005] = "";
	int dem = 1;
	while ( scanf("%s", &s) ) {
		if ( ans==s ) {
			dem++;
			continue;
		}
		if ( thuan_nghich(s) ) {
			if ( strlen(s) > strlen(ans) ) {
				int i;
				for ( i = 0; i < strlen(s); i++) {
					ans[i] = s[i];
				}
			}
		}
	}
	printf("%s %d",ans,dem);
	return 0;
}
