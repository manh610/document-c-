
#include <stdio.h>
#include <math.h>
int main()
{
	int n,a[100],x,dem=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
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
		if (a[i]==a[i+1]){
			dem++;
		}
		if (a[i]!=a[i+1]){
			printf("%d %d\n",a[i],dem);
			dem=1;
		}
	}
	return 0;
}

// code by Manh

