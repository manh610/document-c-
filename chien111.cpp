#include <stdio.h>
#include <math.h>
int main () 
{
	int n,a[10005];
	int am=0,duong=0,dem1=0,dem2=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf ("%d",&a[i]);
	}
	for(int i=1;i<=n;i++) {
		if ( a[i]<0 ){
			am+=a[i];
			dem1++;
		}
		if ( a[i]>0 ) {
			duong+=a[i];
			dem2++;
		}
	}
	printf("trung binh am: %f", 1.0*am/dem1);
	printf("\ntrung binh duong: %f", 1.0*duong/dem2);
	return 0;
}
