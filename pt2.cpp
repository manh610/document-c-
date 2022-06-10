#include <stdio.h>
#include <math.h>
int main ()
{
	float a,b,c,delta;
	printf ( "nhap he so a, b, c : ");
	scanf ( "%f %f %f", &a, &b, &c);
	delta = b*b-4*a*c;
	if ( delta < 0 ) printf ( "phuong trinh vo nghiem");
	else if ( delta==0 ) printf ("nghiem kep : %f", -b/2*a );
	else {
		float x1 = (-b+sqrt(delta) )/2*a;
		float x2 = (-b-sqrt(delta) )/2*a;
		printf ("nghiem phan biet : %f %f", x1, x2);
	}
	return 0;
}
