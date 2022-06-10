#include <stdio.h>
#include <string.h>

void Solve ( char a[] ) {
	int dem = 0, chan = 0, le = 0;
	int n = strlen(a);
	for(int i = 0; i < n-1; i++) {
		if ( a[i]==' ') dem++;
		if ( a[i]!=' ' && a[i+1]==' ' ) {
			int tmp = a[i] + 48;
			if ( tmp%2 ) le++;
			else chan++;
		}
	}
	if ( (a[n-1]+48)%2 ) le++;
	else chan++;
	if ( (dem+1)%2 ) {
		if (le>chan) printf("YES\n");
		else printf("NO\n");
	} else {
		if (le>=chan) printf("NO\n");
		else printf("YES\n");
	}
}

int main()
{
	int test;
	scanf("%d", &test);
	while ( test-- ) {
		scanf("\n");
		char s[1000];
		gets(s);
		Solve(s);
	}
	return 0;
}
