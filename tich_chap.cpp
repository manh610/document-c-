#include <stdio.h>

int main() 
{
	int test; scanf("%d", &test);
	while ( test-- ) {
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n+1][m+1];
		for ( int i = 0; i < n; i++) {
			for ( int j = 0; j < m; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		int b[3][3];
		for ( int i = 0; i < 3; i++)
			for ( int j = 0; j < 3; j++)
				scanf("%d", &b[i][j]);
		long long ans = 0;
		for ( int i = 1; i < n-1; i++ ) {
			for ( int j = 1; j< m-1; j++) {
				ans += ( a[i][j]*b[1][1] + a[i-1][j-1]*b[0][0] + a[i+1][j+1]*b[2][2]
						+ a[i-1][j]*b[0][1] + a[i+1][j]*b[2][1] + a[i+1][j-1]*b[2][0]
						+ a[i][j-1]*b[1][0] + a[i][j+1]*b[1][2] + a[i-1][j+1]*b[0][2]);
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
