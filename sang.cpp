#include <stdio.h>
#include <math.h>
int snt(int n)
{
	if (n==1 || n==0) return 0;
	else{
		if (n==2 || n==3) return 1;
		else{
			for (int i=2;i<=sqrt(n);i++){
				if(n%i==0) return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int a,b,n,dem=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		for (int j=a;j>=a && j<=b;j++){
			if (snt(j)==1){
				dem++;
			}
		}
		if(dem==0){
			printf ("0\n");
			printf("-1");
		}
		else{
			printf("%d\n",dem);
			for(int j=a;j>=a&&j<=b;j++){
				if (snt(j)==1) printf("%d ",j);
			}
		}
		dem=0;
		
	}
	return 0;
}

// code by Manh

