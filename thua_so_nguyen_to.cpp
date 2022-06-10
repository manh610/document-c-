#include <stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	long long a[10000];
	int j = 0;
	for ( long long i = 2; i <= n; i++) {
		while ( n%i==0 ) {
			a[j++] = i;
			n/=i;
		}
	}
	for ( int k = j-1; k >0 ; k--) {
		printf("%lldx",a[k]);
	}
	printf("%lld",a[0]);
	return 0;
}
