#include <stdio.h>
#include <math.h>
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int a,b,x,y;
		float k,m;
		scanf("%d %d %d %d",&a,&b,&x,&y);
		k=1.0*sqrt(a*a+b*b);
		m=1.0*sqrt(x*x+y*y);
		if(k<m) dem++;
	}
	if(dem>n-dem){
		printf("Oppa");
	}
	else printf("Unnie");

	return 0;
}

// code by Manh

