#include <stdio.h>
#include <math.h>
int max(int a, int b){
	if (a>b) return a;
	else return b;
}
int min(int a, int b){
	if (a<b) return a;
	else return b;
}
int main()
{
	int a,b,c,ma,mi;
	scanf("%d %d %d",&a,&b,&c);
	ma = max(max(a,b),c);
	mi = min(min(a,b),c);
    printf("%d",ma);
	return 0;
}



