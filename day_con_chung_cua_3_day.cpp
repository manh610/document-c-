#include <stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while ( test-- ) {
		int n1,n2,n3;
		scanf("%d %d %d",&n1, &n2, &n3);
		int a[n1+1], b[n2+1], c[n3+1];
		for ( int i = 0; i < n1; i++) scanf("%d",&a[i]);
		for ( int i = 0; i < n2; i++) scanf("%d",&b[i]);
		for ( int i = 0; i < n3; i++) scanf("%d",&c[i]);
		int i = 0,j = 0,k = 0;
		int ok = 1;
		while ( i<n1 && j <n2 && k < n3) {
			if ( a[i]==b[j] && a[i]==c[k] ) {
				ok = 0;
				printf("%d ",a[i]);
				i++;
				j++;
				k++;
			} else {
				int min = (a[i]<b[j])?((a[i]<c[k])?a[i]:c[k]):((b[j]<c[k])?b[j]:c[k]);
				if ( min==a[i] ) i++;
				if ( min==b[j] ) j++;
				if ( min==c[k] ) k++;
			}
		}
		if ( ok ) printf("NO");
		printf("\n");
	}
	return 0;
}
