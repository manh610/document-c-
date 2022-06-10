#include <stdio.h>
#include <math.h>
main ()
{
	double a,x;
	printf("Moi ban nhap a, x : ");
	scanf("%lf %lf", &a, &x);
	double ans = exp(x*log(a));
	printf("%lf",ans);

}


