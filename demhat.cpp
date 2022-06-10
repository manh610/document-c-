#include <stdio.h>
#include <math.h>
int main()
{
	int n,a[100],i,dem=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",a[i]);
	}
	for(i=0;i<=n-1;i++){
		if( a[i]!=a[i+1] ) dem++;
	}
	printf("%d",dem);
	return 0;
}

// code by Manh

