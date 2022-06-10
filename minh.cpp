#include<stdio.h>
 
int main(){
	int n,a[1005];
	scanf ("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int r=a[i];
				a[i]=a[j];
				a[j]=r;
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
