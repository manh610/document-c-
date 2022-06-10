#include <stdio.h>
#include <math.h>
int main()
{
	int i,gt=1;
	while (1){
		scanf("%d",&i);
		if (i==0) break;
		for (int j=1;j<=i;j++){
			gt=gt*j;
		}
		printf("%d\n",gt);
		gt=1;
	}

	return 0;
}



