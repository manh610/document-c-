#include <stdio.h>

int main()
{
	int test; scanf("%d", &test);
	int dem = 1;
	while ( test-- ) {
		int m,n, k = 0;
		scanf("%d%d",&n,&m);
		int a[n+1][m+1];
		int v[m*n+1];
		for ( int i = 0; i <n; i++) {
			for ( int j = 0; j <m; j++) {
				scanf("%d",&a[i][j]);
				v[k++] = a[i][j];
			}
		}
		printf("Test %d:\n",dem++);
		for ( int i = 0; i < k-1; i++) {
			for ( int j = i+1; j < k; j++) {
				if ( v[i]>v[j] ) {
					int tmp = v[i];
					v[i] = v[j];
					v[j] = tmp;
				}
			}
		}
		k = 0;
		for ( int j = 0; j < m; j++) {
			int i = 0, t = j;
			while ( t >= 0 && i<n ) {
				a[i++][t--] = v[k];
				k++;
			}
		}
		for ( int i = 1 ; i < n; i++) {
			int j = m-1, t = i;
			while ( t < n && j>=0 ) {
				a[t++][j--] = v[k];
				k++; 
			}
		}
		for ( int i = 0; i <n; i++) {
			for ( int j = 0; j <m; j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

// code by Manh.





