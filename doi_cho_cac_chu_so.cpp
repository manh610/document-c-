#include <stdio.h>
#include <string.h>
int main()
{
	int test; scanf("%d",&test);
	while ( test-- ) {
		char s[1005];
		scanf("%s",&s);
		int n = strlen(s);
		int vt1 = -1;
		for ( int i = n-1; i > 0; i--) {
			if ( s[i]<s[i-1] ) {
				vt1 = i-1;
				break;
			}
		}
		if ( vt1==-1 ) {
			printf("-1\n");
			continue;
		}
		int vt2 = -1;
		char max = 47;
		for ( int i = vt1+1; i < n; i++) {
			if ( s[i]<s[vt1] && s[i] > max ) {
				vt2 = i;
				max = s[i];
			}
		}
		if ( vt2==-1 ) {
			printf("-1\n");
			continue;
		}
		char t = s[vt1];
		s[vt1] = s[vt2];
		s[vt2] = t;
		if ( s[0]=='0' ) printf("-1\n");
		else printf("%s\n",s);
	}
	return 0;
}
