#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+5][m+5],b[n+5][m+5],c[n+5][m+5];
	for (int i = 0;i < n; i++){
		for (int j = 0; j < m; j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 0;i < n; i++){
		for (int j = 0; j < m; j++){
			printf("b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for (int i = 0;i < n; i++){
		for (int j = 0; j < m; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for (int i = 0;i < n; i++){
		for (int j = 0; j < m; j++){
			printf("c[%d][%d]: %d",i,j,c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
