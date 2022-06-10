#include <stdio.h>
#include <math.h>
int giaithua(int k)
{
	int gt=1;
	for(int i=1;i<=k;i++){
		gt=gt*i;
	}
	return gt;
}
int main()
{
	int n,k,x;
	scanf("%d %d",&n,&k);
	x=giaithua(n)/(giaithua(k)*giaithua(n-k));
	printf("%d",x);
	return 0;
}

// code by Manh
		
