#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,dem=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		if (n%i==0) dem=dem+1;
	}
	printf("%d",dem);

	return 0;
}

// code by Manh

