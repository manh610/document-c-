#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float s;
	scanf("%d %d %d",&a,&b,&c);
	s=4.0*(1.0*sqrt(a*b*c)/a+1.0*sqrt(a*b*c)/b+1.0*sqrt(a*b*c)/c);
	printf("%.0f",s);
	return 0;
}
  
// code by Manh.
