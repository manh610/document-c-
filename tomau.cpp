#include <stdio.h>
#include <math.h>
int main()
{
	int n,a[100001],b[100001],c[100001];
	while( 1 ){
	scanf("%d",&n);
	if(n==0) break;
	a[1]=1;
	b[1]=1;
	c[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=(b[i-1]+a[i-1]+c[i-1])%1000000007;
		b[i]=(a[i-1]+c[i-1])%1000000007;
		c[i]=(a[i-1]+b[i-1])%1000000007;
	}
	printf("%lld",(a[n]+b[n]+c[n])%1000000007);
	}
	return 0;
}

// code by Manh

