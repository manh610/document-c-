#include <stdio.h>
#include <math.h>
int main()
{
	int n,s=0,s1=0;
	scanf("%d",&n);
	while(n>0){
		s=n%10;
		s1+=s;
		n=n/10;
	}
	printf("%d",s1);
	return 0;
}

// code by Manh

