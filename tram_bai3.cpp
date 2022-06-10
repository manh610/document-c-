#include <stdio.h>
#include <math.h>
main ()
{
	int a,b,c;
	printf("Moi ban nhap 3 canh cua tam giac : ");
	scanf("%d %d %d", &a, &b, &c);
	float S,t;
	t = (a+b+c)/2.0;
	S = sqrt(t*(t-a)*(t-b)*(t-c));
	printf("Dien tich tam giac la : %f",S);

}

