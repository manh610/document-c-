#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int soSanh(int a, int b)
{
	if(a > b)
	{
		printf("Lon hon ban oi\n");
	}
	else if(a == b)
	{
		printf(" DUng roi ban oi,Ban co muon tiep tuc khong 1. co\ 2.khong\n");
	}
	else
	{
		printf("Nho hon ban ooi\n");
	}
}
int chonMotSoNgauNhien(int a)
// function de tao mot ngau nhien cho tro choi
{
	const int MAX = 100 , MIN = 1;
	srand(time(NULL));
	a = rand() % (MAX -MIN + 10);
 
}
int main(int argc,char*argv[])
{
	int m = 0, n = 0,e;
	do
	{
	m = chonMotSoNgauNhien(5);
	printf("Day la tro choi doan so , may da chon ngau nhien mot so trong khoang tu 1 -100, Moi ban doan so do  ?\n");
	do
	{
	scanf("%d",&n);
	soSanh(m,n);
}while(m !=n);
scanf("%d",&e);
}while(e);
	return 0;
}
