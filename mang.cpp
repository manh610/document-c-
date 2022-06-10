#include <stdio.h>
#include <math.h>
int main()
{ 
	int a[1000],tong=0,n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		tong=tong+a[i];
	}
	printf("%d",tong);
	return 0;
}



