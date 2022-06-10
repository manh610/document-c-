#include <stdio.h>
int main ()
{
	double a,b;
	printf ("MOI BAN NHAP HAI SO A, B : ");
	scanf ("%lf %lf", &a, &b);
	printf ("MOI BAN NHAP PHEP TINH : ");
	char c;
	scanf(" %c",&c);
	switch ( c ) {
		case '+' : printf ( "tong : %.2lf",a+b); break;
		case '-' : printf ( "hieu : %.2lf",a-b); break;
		case '*' : printf ( "tich : %.2lf",a*b); break;
		case '/' : printf ( "chia : %.2lf",a/b); break;
	}
	return 0;
}


