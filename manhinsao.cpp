#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n-1;j++){
			if(i+j==n+1 || abs(i-j)==n-1) printf("*");
			else if(i==n) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
}

// code by Manh

