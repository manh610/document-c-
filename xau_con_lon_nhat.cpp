#include <stdio.h>
#include <string.h>

char max(char s[], int i, int j) {
	char tmp = s[i];
	for ( int k = i; k <= j; k++) {
		if ( s[k] > tmp ) 
			tmp = s[k];
	}
	return tmp;
}

int main()
{
	char s[1005];
	scanf("%s",&s);
	int i = 0, j = strlen(s)-1;
	while ( 1 ) {
		if ( i>j ) 
			break;
		char tmp = max(s,i,j);
		int index = 0;
		for (int k = i; k <= j; k++) {
			if ( s[k]==tmp ) {
				printf("%c",s[k]);
				index = k;
			}	
		}
		i = index+1;
	}
	return 0;
}
