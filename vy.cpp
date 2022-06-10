#include <stdio.h>
#include <math.h>
int ktra(int n){
	float x = 1.0*sqrt(n);
	if ( x!=sqrt(n) ) return 0;
	else return 1;
}
int main ()
{
	int m,n,dem=0;
	scanf("%d %d",&m, &n);
	for(int i=m; i<=n; i++) {
		if( ktra(i)==1 ) dem++;
	}
	printf("%d\n",dem);
	for(int i=m; i<=n; i++) {
		if( ktra(i)==1 ) printf("%d ",i);
	}
	return 0;
}
