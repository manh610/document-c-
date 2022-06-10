#include <stdio.h>
#include <math.h>
int main()
{
	int dem=0,sum=0;
	for(int i=10;i<=500;i++){
		if(i%3==0 && i%5==0 && i%12==0){
			dem++;
			sum=sum+i;
		}
	}
	printf("TONG LA: %d",sum);
	printf("\nTRUNG BINH CONG LA: %d",sum/dem);
	return 0;
	
}
