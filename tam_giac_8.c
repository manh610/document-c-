#include <stdio.h>
void display(int n)
{
	int j, k = 0,i;
	for (i=1; i<=n; i++)
	{
		if (i%2 != 0)
		{
			for (j=k+1; j<k+i; j++)
				printf("%d ",j);
			printf("%d\n",j++);
			k = j;	
		}
		else
		{
			k = k+i-1;
			for (j=k; j>k-i+1; j--)
				printf("%d ",j);
			printf("%d\n",j);
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	display(n);
	return 0;
}

