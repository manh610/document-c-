#include <stdio.h>
#include <math.h>
int main()
{
	int n,x,y;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d %d",&x,&y);
		while (x>0){
			int du=x%16;
			if (du<10) printf("%d",du);
			else {
				switch (du){
					case 10: printf("A"); break;
					case 11: printf("B"); break;
					case 12: printf("C"); break;
					case 13: printf("D"); break;
					case 14: printf("E"); break;
					case 15: printf("F"); break;
				}
			}
			x=x/16;
		}
		printf(" ");
		while (y>0){
			int du=y%16;
			if (du<10) printf("%d",du);
			else {
				switch (du){
					case 10: printf("A"); break;
					case 11: printf("B"); break;
					case 12: printf("C"); break;
					case 13: printf("D"); break;
					case 14: printf("E"); break;
					case 15: printf("F"); break;
				}
			}
			y=y/16;
		}
	}
	return 0;
}

// code by Manh

