#include <stdio.h>
#include <string.h>

char s[20];

void input() {
	scanf("%s",&s);
}

int ktra( char a[]) {
	int n = strlen(a);
	int ok = 0;
	for ( int i = 0; i < n; i++) {
		if ( a[i]!='1' && a[i]!='8' && a[i]!='9' && a[i]!='0')
			return 0;
		else if ( a[i]=='1')
			ok = 1;
	}
	return ok;
}

void solve() {
	if ( ktra(s) ) {
		int index = -1, n = strlen(s);
		for ( int i = 0; i < n; i++) {
			if ( s[i]=='1' ) {
				index = i;
				break;
			}
		}
		for ( int i = index; i < n; i++) {
			if ( s[i]=='1' ) 
				printf("1");
			else
				printf("0");
		}
	} else {
		printf("INVALID");
	}
	printf("\n");
}

int main()
{
	int test; scanf("%d",&test);
	while ( test-- ) {
		input();
		solve();		
	}	
	return 0;
}
