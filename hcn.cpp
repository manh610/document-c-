#include <stdio.h>
#include <math.h>
int main()
{
	int a1,a2,b1,b2,c1,c2;
	scanf ("%d %d",&a1,&a2);
	scanf("\n%d %d",&b1,&b2);
	scanf("\n%d %d",&c1,&c2);
	printf("%d ",(a1==b1)?c1:((a1==c1)?b1:a1));
	printf("%d",(a2==b2)?c2:((a2==c2)?b2:a2));	
	return 0;
}


