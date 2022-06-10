#include <stdio.h>
#include <math.h>
int ktra(int n){
	if(n==0 || n==1) return 0;
	else if(n==2 || n==3) return 1;
	else for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		if( ktra(i)==1 ) {
			printf("%d ",i);
		}
	}
	return 0;
}
