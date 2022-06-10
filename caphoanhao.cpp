#include <stdio.h>
#include <math.h>
int main()
{
	int n,e,a[100001],dem=0;
	scanf("%d %d",&n,&e);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<n;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]+pow(a[j],2)==e) dem=dem+1;
		}
	}
	printf("%d",dem);
	return 0;
}

// code by Manh

