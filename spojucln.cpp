#include <stdio.h>
#include <math.h>
int gcd(int a, int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main()
{	
	int a,b;
	while( 1 ){
		scanf("%d %d",&a,&b);
		if(a==0 && b==0) break;
		printf("%d %lld\n",gcd(a,b),a*b/gcd(a,b));
	}
	return 0;
}

// code by Manh

