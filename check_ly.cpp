#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n+2];
	for(int i=0; i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=1;
	int max=1;
	int gt1; // phan tu dau tien cua duong chay hien tai
	int gt2; //phan tu  dau tien cua duong chay dai nhat can tim
	for(int i=0;i<n;i++){
		if (a[i]<a[i+1])
		dem ++;
		if(a[i]>a[i+1]){
			if(dem>max){
			max =dem;
			gt2=gt1;
			}
			dem = 1;
			gt1 = i+1;
		}
 
	}
	printf("%d %d",gt2, max);
 
	return 0;
}
