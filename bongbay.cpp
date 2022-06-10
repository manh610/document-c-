#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if( a<b ) {
		if ( b<c ) printf ("%d",a*3+3);
		else {
			if ( c-a>=2 ) printf ("%d",a*3+3);
			else printf ("%d",c*3-3);
		}
	}
	else {
		if ( b>c ) printf("%d",c*3-3);
		else printf("%d",b*3);
	}
	return  0;
}

