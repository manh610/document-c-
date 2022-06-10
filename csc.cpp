#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int doicho;
	if (a>b) {
		doicho=a;
		a=b;
		b=doicho;
	}
	if (b>c) {
		doicho=b;
		b=c;
		c=doicho;
	}
	if ( abs(a-b) == abs(b-c) ){
		printf("%d",c+b-a);
	}
	else printf("%d",a+c-b);
	return 0;
}



