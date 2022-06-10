#include <stdio.h>
#include <math.h>
int main () 
{
	int n,a,b,A[10005];
	scanf("%d %d %d",&n, &a, &b );
	for(int i=1;i<=n;i++) {
		A[i]=0;
	}
	for(int i=1;i<=a;i++){
		A[i]=1;
	}
	for(int i=1;i<n-b;i++) {
		A[i]=1;
	}
	int dem=0;
	for(int i=1;i<=n;i++) {
		if ( A[i]==0 ) dem++;
	}
	printf("%d",dem);
	return 0;
	
}
