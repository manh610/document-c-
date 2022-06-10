#include <stdio.h>
#include <string.h>
#include <math.h>

int snt(char c) {
	int x = c-48,i;
	if ( x<2) return 0;
	for ( i = 2; i <= sqrt(x); i++) {
		if ( x%i==0 )
			return 0;
	}
	return 1;
}

int ktra(char n[]) {
	int i = 0, j = strlen(n)-1;
	while ( i < j) {
		if ( n[i]!=n[j] || snt(n[i])==0 )
			return 0;
		i++; 
		j--;
	}
	return 1;
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
