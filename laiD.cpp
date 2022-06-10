#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,k,h,a[4];
	i=1;k=0;j=0;h=0;
	for(i=1;i<=9;i++){
		a[1]=i;
		for(j=0;j<=9;j++){
			a[2]=j;
			for(k=0;k<=9;k++){
				a[3]=k;
				for(h=0;h<=9;h++){
					a[4]=h;
				}
			}
		}
		for(int m=1;m<=4;m++) printf("%d",a[m]);
		for(int n=4;n>=1;n--) printf("%d",a[n]);
		printf("\n");
	}
	
	 

	return 0;
}

// code by Manh

