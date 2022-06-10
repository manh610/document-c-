#include <stdio.h>
#include <math.h>
int main(void) {
	double a,b,c;
	scanf ( "%lf %lf %lf", &a, &b, &c);
	double d,e;
	d = ( a + b + abs(a-b) ) /2;
	e = ( a + b - abs(a-b) ) /2;
	double min, max;
	max = ( d + c + abs(d-c) ) /2;
	min = ( e + c - abs(e-c) ) /2;
	printf("%lf %lf", max, min);
	return 0;
}
 
