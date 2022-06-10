#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=(n+1)/2;i++){
		for(int j=1;j<=(n+1)/2;j++){
			if(abs((n+1)/2-i) + abs((n+1)/2-j)<n) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

// code by Manh

