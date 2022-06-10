#include <stdio.h>
#include <math.h>


int ktra(int n, int k) {
	int a[10005];
	int j = -1;
	while ( n ) {
		int du = n%k;
		a[++j] = du;
		n/=k;
	}
	int i = 0;
	while ( i < j ) {
		if ( a[i]!=a[j] )
			return 0;
		i++; j--;
	}
	return 1;
}

int main()
{
	int a,b,M;
	scanf("%d %d %d",&a,&b,&M);
	int dem = 0;
	for ( int i = a; i <= b; i++) {
		int ok = 1;
		for ( int k = 2; k <= M; k++) {
			if ( ktra(i,k)==0 ) {
				ok = 0;
				break;
			}
		}
		if ( ok ) dem++;
	}
	printf("%d",dem);
	return 0;
}
