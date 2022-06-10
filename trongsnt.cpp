#include <stdio.h>
#include <math.h>
int ktra(int a) {
	if ( a==0 || a==1 ) return 0;
	else if ( a==2 || a==3 ) return 1;
	else {
		for ( int i=2; i <= sqrt(a); ++i ) {
			if ( a%i==0 ) return 0;
		}
	}		
	return 1;
}
int main () 
{
	int a,b,dem=0;
	scanf("%d %d",&a,&b);
	for ( int i=a; i <= b; ++i) {
		if ( ktra(i)==1 ){
			printf("%d ",i);
			dem++;
		}
	}
	if ( dem==0 ) printf("-1");
	return 0;
}
