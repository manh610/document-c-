#include <stdio.h>
int main()
{
	int n, sls;
	printf ("moi ban nhap n : ");
	scanf("%d",&n);
	sls = ( n % 2 ) ? ( (n-1)/2 + 1 ) : ( (n-2)/2 + 1);
	printf ( "tong s = %d", ( n % 2 ) ? (n+1)*sls/2 : (n+2)*sls/2 );
	return 0;
}
