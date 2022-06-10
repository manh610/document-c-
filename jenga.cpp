#include<stdio.h>
int main()
{
	long long a,tang;
	scanf("%lld",&a);
	if (a%3==0)
		tang=a/3;
	else
		tang=a/3+1;
		
	if (tang%2==0)
		printf("Unnie");
	else
		printf("Oppa");
	return 0;
}


