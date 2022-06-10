#include <stdio.h>
#include <math.h>
int main()
{
	int n,a[10001],x;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d\n",&a[i]);
	}
	for (int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

// code by Manh

