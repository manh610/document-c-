#include <stdio.h>
#include <math.h>
#define N 100005
int d[N]={0};
int main()
{
	int u,v,n,dem=0;
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		scanf("%d %d",&u,&v);
		for(int i=2;i<=v;i++){ 
			if (d[i]==0){
				d[i]=1;
				for(int j=2*i;j<=v;j+=i){
					d[j]=-1;
				}
			}
		}
		for(int k=u;k<=v;k++){
			if (d[k]==1) dem++;
		}		
		printf("%d\n",dem);
		if(dem==0) printf("-1\n");
		else{
			for(int k=u;k<=v;k++){
				if (d[k]==1) printf("%d ",k);
			}
			printf("\n");		
		}
		dem=0;
	}	
	return 0;
}

// code by Manh

