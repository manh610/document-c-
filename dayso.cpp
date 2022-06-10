#include <stdio.h>
#include <math.h>
int main()
{
	int n,f[10005],x=10;
	scanf("%d",&n);
	f[1]=0;
	f[2]=0;
	f[3]=1;
	for(int i=4;i<=n;i++){
		for(int j=1;j<=i-3;j++){
			f[i]= (9*(f[i-1]+f[i-2]+f[i-3])%1000000007 + x%1000000007)%1000000007;
			x*=10;
		}
		x=10;
	}
	printf("%d",&f[n]);
	return 0;
}

// code by Manh

