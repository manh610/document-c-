#include <stdio.h>
main ()
{
	int n;
	printf("Moi ban nhap n : ");
	scanf("%d",&n);
	int a = n%10;
	int b = (n/10)%10;
	int c = n/100;
	printf("Hang tram = %d\n",c);
	printf("Hang chuc = %d\n", b);
	printf("Hang don vi = %d", a);

}


