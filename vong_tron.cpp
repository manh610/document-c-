#include <stdio.h>

int main()
{
	char s[100];
	int a[100];
	int dem = 0;
	for ( int i = 0; i < 52; i++) scanf("%c",&s[i]);
	long long ans = 0;
	for ( int i = 0; i < 52; i++) a[i] = 0;
	for ( int i = 0; i < 51; i++) {
		if ( s[i]!=s[i+1] ) 
			a[i] = 1;
		else {
			i++;
			dem+=2;
		}
	}
	while ( dem<52 ) {
		int ok = 0;
		while ( 1 ) {
			for ( int i = 0; i < 51; i++) {
				if ( s[i]!=s[i+1] ) 
					a[i] = 1;
				else {
					i++;
					dem+=2;
					ok==1
				}
			}
			if ( ok==1 ) break;
		}
		char tmp;
		for ( int i = 0; i < 52; i++) {
			if ( a[i]==1 ) {
				tmp = s[i];
				a[i] = 0;
				dem++;
				break;
			}
		}
		int count = 0;
		for ( int i = 0; i < 52; i++) {
			if ( a[i]==1 ) {
				count++;
				if ( s[i]==tmp ) {
					a[i] = 0;
					dem++;
					break;
				}
			}
		}
		ans += count - 1;
	}
	printf("%lld",ans);
	return 0;	
}

// ABCCBADDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ
