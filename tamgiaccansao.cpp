#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int tmp=1;
		for(int j=1;j<=2*n-1;j++){
			if(abs(n-i)+abs(n-j)<n){
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

// code by Manh.
