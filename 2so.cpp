#include <stdio.h>
#include <math.h>
int main()
{
	int a[1000],n,vt,max1,max2;
	scanf("%d",&n);
	for (int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	max1=a[0];
	max2=a[0];
	for (int i=0;i<=n-1;i++){
		if (max1<=a[i]){
			max1=a[i];
			vt=i;
		}
	}
	for (int i=0;i<=n && i!=vt;i++){
		if (max2<=a[i]){
			max2=a[i];
		}
	}
	printf("%d %d",max1,max2);

	return 0;
}



