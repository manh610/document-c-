#include <stdio.h>
#include <math.h>
int main ()
{
	int test;
	scanf("%d",&test);
	while ( test ){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if ( a==c ) printf ("%d %d",a,c+1);
		else printf("%d %d",a,c);
		printf("\n");
		test--;
	}
	return 0;
}
