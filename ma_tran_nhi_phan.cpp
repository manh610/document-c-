#include <stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while ( test-- ) {
		int n,m;
		scanf("%d %d", &n,&m);
		int a[200][200];
		int b[200][200];
		for ( int i = 0; i < n; i++) {
			for ( int j = 0; j < m; j++) {
				b[i][j] = 0;
			}
		}
		for ( int i = 0; i < n; i++) {
			for ( int j = 0; j < m; j++) {
				scanf("%d",&a[i][j]);
				if ( a[i][j]==1 ) {
					for ( int k = 0; k < n; k++) {
						b[k][j] = 1;
					}
					for ( int k = 0; k < m; k++) {
						b[i][k] = 1;
					}
				}
			}
		}
		for ( int i = 0; i < n; i++) {
			for ( int j = 0; j < m; j++) {
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
