#include <stdio.h>


int luythua(int a,int b) {
	if ( b==1 ) return a;
	int x = luythua(a,b/2);
	if ( b%2==1 ) return x*x*a;
	else return x*x;
}



int main () 
{
	printf("%lld",luythua(5,5));
	return 0;
}


// code by MANH.
