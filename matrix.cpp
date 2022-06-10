#include <stdio.h>
#include <math.h>
int main(){
	int sotest,bien;
	scanf("%d",&sotest);
	for(int bien=1;bien<=sotest;bien++){
		int n,i,giatri,j, sohang,socot, vthang,vtcot,x,y;
		scanf("%d",&n);
		int a[n][n];
		sohang = socot =n;
		vthang =vtcot =1;
		giatri = n*n ;
		while(giatri >=1 ){
    		for(i=vtcot;i<=socot;i++){ 
				a[vthang][i] = giatri; 
				giatri--; 
			}
    		for(i=vthang+1;i<=sohang;i++){ 
				a[i][socot]=giatri; 
				giatri--; 
			}
 	 		for(i=socot-1;i>=vtcot;i--){ 
				a[sohang][i] =giatri; 
				giatri--; 
			}
    		for(i=sohang-1;i>vthang;i--){ 
				a[i][vtcot]=giatri;
				giatri--; 
			}
    		vthang++; 
			vtcot++; 
			sohang--; 
			socot--;
		}
		for(int k=1;k<=n;k++){
			for(int h=1;h<=n;h++){
				printf("%d ",a[k][h]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
