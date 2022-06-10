#include <stdio.h>
#include <math.h>
int main()
{
	int a[1000],vitri,max=0,n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++){
		if (a[i]>=max){
			max=a[i];
			vitri=i;
		}
	}
	printf("%d %d",max,vitri);
	return 0;
}



