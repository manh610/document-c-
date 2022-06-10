#include <stdio.h>
#include <math.h>
int main()
{
	int n,dem=0;
	scanf ("%d",&n);
	int a[n+1];
	for (int i=0;i<n;i++) {
		scanf ("%d",&a[i]);
	}
	for (int i=0;i<n;i++) {
		float x = sqrt(a[i]);
		if ( x*x==a[i] ) dem++;
	}
	printf ("%d",dem);
	return 0;
}
 
