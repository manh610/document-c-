#include <stdio.h>

int ktra(int n) {
	int tmp = n, sum = 0;
	while ( tmp > 0 ) {
		int cuoi = tmp%10;
		tmp/=10;
		if ( cuoi==9 ) 
			return 0;
		sum = sum*10 + cuoi;
	}
	return (sum==n)?1:0;
}

int main()
{
	int n,i,dem = 0; 
	scanf("%d",&n);
	for ( i = 2; i < n; i++) {
		if ( ktra(i) ) {
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
	return 0;
}
