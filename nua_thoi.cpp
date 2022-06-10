#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int dem = 1;
	for ( int i = 1; i <= 2*n-1; i++) {
		for ( int j = 1; j <= dem; j++) {
			printf("*");
		}
		printf("\n");
		if ( i < n) dem++;
		else dem--;
	}
	return 0;
}
