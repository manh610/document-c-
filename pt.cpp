#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b;
	printf("giai phuong trinh ax + b = 0");
	printf("\nMOI NHAP A: ");
	scanf("%d",&a);
	printf("\nMOI BAN NHAP B: ");
	scanf("%d",&b);
	if (a==0) {
		if (b==0) {
			printf("\npt vo so nghiem");
		}
		else printf("\npt vo nghiem");
	}
	else printf("\npt co nghiem: %.3f",1.0*(-b)/a);
}
