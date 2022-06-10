#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++ ){
		for(int j=1;j<=n;j++ ){
			if(i==n || j==n || i==1 || j==1){
				printf("%d",n);
				n=n-1;	
			}
		}
	}
	return 0;
}

// code by Manh

