#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=n;
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<=2*n-1;j++){
			if(j==a || (j-n)==(n-a)) printf("*");
			else printf(" ");
		}
		printf("\n");
		if(i<n) a--;
		else a++;
	}
	return 0;
}

// code by Manh

