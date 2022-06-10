#include <stdio.h>
#include<math.h>
int main()
{
	int a,b;
	long long c,d;
	scanf("%d",&a);
	b=pow(a,2);
	c=pow(a,3);
	d=pow(a,4);
	printf("%d %d %lld %lld",a,b,c,d);
	return 0;
}
