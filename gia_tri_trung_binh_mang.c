#include <stdio.h>
int main () 
{
	long long i,n;
	scanf("%lld",&n);
	long long a[n+1], sum = 0;
	for ( i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
		sum += a[i];
	}
	printf("%.3lf", (double)sum/n);
	return 0;
}
