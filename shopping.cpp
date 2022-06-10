#include <stdio.h>
#include <math.h>
int main()
{
	int d1,d2,d3;
	scanf("%d %d %d",&d1,&d2,&d3);
	if (d1>(d2+d3)) printf("%lld",2*(d2+d3));
	else{
		if (d2>(d1+d3)) printf("%lld",2*(d1+d3));
		else{
			if (d1+d2>d3) printf ("%lld",d1+d2+d3);
			else printf("%lld",2*(d1+d2));
		}
	}
	return 0;
}

// code by Manh

