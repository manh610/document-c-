#include<iostream>
#include<fstream>
const int N=10005;
using namespace std;
void docfile(int a[],int &n)
{
    FILE *f;
    f=fopen("mangin.text","rt");
    fscanf(f,"%d",&n);
    for(int i=1;i<=n;i++)
        fscanf(f,"%d",&a[i]);
    fclose(f);
}
void ghifile(int a[],int &n)
{
    FILE *f;
    f=fopen("manh.text","wt");
    fprintf(f,"%d",&n);
    for(int i=1;i<=n;i++)
        fprintf(f,"%d",a[i]);
    fclose(f);
}
int sapxepmang(int a[],int &n){
	float x;
	int max;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				x= a[i];
				a[i]= a[j];
				a[j]=x;
			}
		}
	}
}
main()
{
	int a[N],n;
	docfile(a,n);
	sapxepmang(a,n);
	ghifile(a,n);
}
