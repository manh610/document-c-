#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n%5!=0 || n%3!=0){
		printf("-1");
	}
	else{
		if ( (n%5)%3==0 ){
			printf("%d",n/5+(n%5)/3);
		}
		else{
			printf("%d",n/3);
		}
	}
	return 0;
}

// code by Manh

