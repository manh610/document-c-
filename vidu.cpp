#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j, n,k,x;
	int a[100], b[100];
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i + 1);
		scanf("%d", &a[i]);
	}
	printf("mang da nhap la: \n");
	for (i=0;i < n;i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\nnhap vi tri muon chen k=");
	scanf("%d", &k);
	printf("gia tri cua phan tu, x=");
	scanf("%d", &x);
	for (i=0; i < k-1;i++) 
	{
		b[i]=a[i];
	}
	b[k-1]=x;
	for (j=i; j < n ;j++) 
	{
		k++;
		b[k-1]=a[j];
	}
	for (i = 0; i < n + 1; i++)
	{
		a[i] = b[i];
	}
	printf("mang sau khi chen them la:\n");
	for (i = 0; i < n + 1; i++) 
		printf(" %d ", a[i]);     
	return 0;
}
