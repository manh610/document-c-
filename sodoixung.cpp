#include <stdio.h>
#include <math.h>
int ktra(int n)
{
	int a,x;
		a=0;
		x=n;
	while(n!=0){
		a=a*10+n%10;
		n=n/10;
	}
	if (a==x) return 1;
	else return 0;
}
int main()
{
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		if(ktra(a)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

// code by Manh

