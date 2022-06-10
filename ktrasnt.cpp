#include <stdio.h>
#include <math.h>
int ktra(long long n)
{
	if( n==1 || n==0) return 0;
	else if( n==2 || n==3) return 1;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	long long a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a);
		if(ktra(a)==0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
