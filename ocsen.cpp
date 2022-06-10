#include <stdio.h>
#include <math.h>
int main ()
{
    long long  A, B, V;
    scanf("%lld %lld %lld",&A,&B,&V);
    if (A==V){
    	printf("1");
	}
    else{
        if ((V-B)%(A-B)==0) printf("%lld",(V-B)/(A-B));
        else printf("%lld",(V-B)/(A-B)+1);
    }
    return 0;
}

