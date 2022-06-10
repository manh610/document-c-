#include <stdio.h>
#include <math.h>
#define M 1000000000+7

long long power(long long a, long long b) {
	if ( b==0 ) return 1;
	if ( b==1 ) return a;
	long long x = power(a,b/2);
	if ( b%2==1 ) return x*x*a;
	else return x*x;
}

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++) {
		long long a,b;
		scanf("%lld %lld",&a, &b);
		printf("%lld\n",power(a,b)%10);
	}
	return 0;
}
