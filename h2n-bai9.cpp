#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	long long x,a[100000];
	scanf("%lld%lld",&n,&x);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=n;)
	{
		if(a[i]==x)
		{
			j=i;
			for(i=j;i<=n;i++)
			{
				a[i]=a[i+1];
			}
			n--;
			i=j;
		}
		else
		{
			i++;
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%lld ",a[i]);
	}
}
