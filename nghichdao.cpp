#include <stdio.h>
#include <math.h>
int nghichdao(int n)
{
	int x=0;
	while (n!=0){
		x=x*10+n%10;
		n=n/10;
	}
	return x;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=nghichdao(a);
	b=nghichdao(b);
	if(a>b) printf("%d",a);
	else printf("%d",b);
	return 0;
}

// code by Manh

