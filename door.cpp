#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,A[100005];
	scanf("%d %d %d",&a, &b, &c);
	for(int i=1; i<=a; i++) {
		scanf("%d", &A[i]);
	}
	int dem=0;
	for(int i=1; i<=a; i++) {
		if ( A[i]<=b ) dem++;
	}
	if ( b>c ) printf("%d",a);
	else {
		printf("%d",(dem+1)/2);
	}
	return 0;
}

