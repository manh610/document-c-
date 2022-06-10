#include <stdio.h>
#include <string.h>

int thuan_nghich(char s[]) {
	int i = 0, j = strlen(s) - 1;
	while ( i < j ) {
		if ( s[i]!=s[j] ) 
			return 0;
		i++; j--;
	}
	return 1;
}

char convert(char s) {
	if ( s=='A' || s=='B' || s=='C') return '2';
	if ( s=='D' || s=='E' || s=='F') return '3';
	if ( s=='G' || s=='H' || s=='I') return '4';
	if ( s=='J' || s=='K' || s=='L') return '5';
	if ( s=='M' || s=='N' || s=='O') return '6';
	if ( s=='P' || s=='Q' || s=='R' || s=='S') return '7';
	if ( s=='T' || s=='U' || s=='V') return '8';
	return '9';
}

void solve(char s[]) {
	int n = strlen(s);
	for ( int i = 0; i < n; i++) {
		if ( s[i]>96 ) s[i] -= 32;
		s[i] = convert(s[i]);
	}
	if ( thuan_nghich(s) ) printf("YES\n");
	else printf("NO\n");
}

int main()
{
	int test; scanf("%d",&test);
	while ( test-- ) {
		char str[1005];
		scanf("%s",&str);
		solve(str);	
	}
	return 0;
}
