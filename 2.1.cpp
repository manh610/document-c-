#include <stdio.h>
int main()
{
	int n;
	printf("NHAP SO TU NHIEN N: ");
	scanf("%d",&n);
	printf("CAC SO CHAN NHO HON %d LA: \n",n);
	for(int i=0;i<=n;++i) {
		if(i%2==0) printf("%d\n",i);
	}
	return 0;
}
