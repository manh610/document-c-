#include <stdio.h>
#include <math.h>
#define M 1000000000+7

long long power(long long a, long long b) {
	if ( b==0 ) return 1;
	if  ( b==1 ) return a;
	long long x = power(a,b/2);
	if ( b%2==1 ) return x*x%M*a%M;
	else return x*x%M;
}

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++) {
		long long n;
		scanf("%lld",&n);
		if (n>3){
			long long m = n/3;
			long long k = n%3;
			if ( k==0 ) printf("%lld\n",power(3,m));
			else if ( k==1 ) printf("%lld\n",power(3,m-1)*4%M);
			else if ( k==2 ) printf("%lld\n",power(3,m)*2%M);
		}
		else printf("%lld\n",n);
	}
	return 0;
}
