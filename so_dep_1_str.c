#include <stdio.h>
#include <string.h>

int ktra(char n[]) {
	int i = 0, j = strlen(n)-1;
	while ( i < j) {
		if ( n[i]!=n[j] || (n[i]-48)%2==1 || (n[j]-48)%2==1)
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
