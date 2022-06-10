#include <stdio.h>
#include <math.h>
int ktra(int n)
{
	int s=0;
	for(int i=1;i<n;i++){
		if(n%i==0) s=s+i;
	}
	if (s>n) return 1;
	return 0;
}
	
int main()
{
	int n,k,dem=0;
	scanf("%d %d",&n,&k);
	for(int i=1;i>=n && i<=k;i++){
		if(ktra(i)==1) dem=dem+1;
	}
	printf("%d",dem);
	return 0;
}

// code by Manh

