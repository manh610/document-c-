#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	while( 1 ){
		scanf("%d %d\n",&a,&b);
		if (a==0 && b==0) break;
			for(int i=b;i>=1;i--){
				if(a%i==0 && b%i==0){
					printf("%d ",i);
					break;
				}
			}
			for(int j=b;j<=b*a;j++){
				if(j%a==0 && j%b==0){
					printf("%d\n",j);
					break;
				}
			}
	}
	return 0;
}

// code by Manh

