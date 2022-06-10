#include<stdio.h>
int main()
{
	int n,S=0,S1=0,S2=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		S+=i;
		if(i%2==0)
			S1+=i;
	}
		S2=S-S1;
		printf("%d\t%d\t%d",S,S1,S2);
	return 0;
}
