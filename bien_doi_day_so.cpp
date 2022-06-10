#include <stdio.h>
#include <math.h>

int main()
{
	while(1){
		int dem=0;
		int a[4];
		for(int i=0; i<4; i++){
			scanf("%d",&a[i]);
		}
		if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0) return 0;
		while ( 1 ) {
			if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3]) 
				break;
			if(a[0]!=a[1] || a[0]!=a[2] || a[0]!=a[3] ) {
				int tmp=a[0];
				a[0]=abs(a[0]-a[1]);
				a[1]=abs(a[1]-a[2]);
				a[2]=abs(a[2]-a[3]);
				a[3]=abs(a[3]-tmp);
			}
			dem++;
			if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3]) 
				break;
		}
		printf("%d\n",dem);
	}
	return 0;
}

// code by NuNu


