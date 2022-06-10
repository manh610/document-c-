#include<stdio.h>

void display(int n)
{
	int i,j;
	for (i = 1; i <= n; i++) {
		int k = i;
		for (j = 1; j <= i; j++) {
			printf("%d ",k);
			k = k + n - j;
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	display(n);
	return 0;
}


