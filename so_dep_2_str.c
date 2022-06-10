#include <stdio.h>
#include <string.h>

int ktra(char n[]) {
	int i = 0, j = strlen(n)-1, sum = 0;
	while ( i < j) {
		if ( n[i]!=n[j] )
			return 0;
		i++; 
		j--;
		sum += n[i] + n[j] - 96;
	}
	if(sum%10==0 && n[0]=='8' && n[strlen(n)-1]=='8') return 1;
	return 0;
}
int main()
{
	long long test;
	scanf("%lld",&test);
	fflush(stdin);
	while ( test-- ) {
		char s[505];
		scanf("%s",s);
		printf(ktra(s)?"YES\n":"NO\n");
	}
	return 0;
}

// Code by NuNu
