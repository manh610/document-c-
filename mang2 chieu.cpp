#include <stdio.h>
#include <math.h>
int main()
{	
	int a[100][10],n,m;
	scanf("%d %d",&n,&m);
	for (int j=1;j<=m;j++){
		for (int i=1;i<=n;i++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int j=1;j<=m;j++){
		for (int i=1;i<=n;i++){
			printf("%d ",a[j][i]);
		}
	printf("\n");
	}
	return 0;
}

// code by Manh

