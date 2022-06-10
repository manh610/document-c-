#include <stdio.h>

int tong_uoc(int n) {
	int sum = 0,i;
	while (n % 2 == 0) 
    { 
        n = n/2;
		sum += 2; 
    } 
    for (i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            n = n/i; 
        	sum += i;
		} 
    } 
    return (n>2)?sum+n:sum;
}

int main()
{
	int test;
	long long ans = 0;
	scanf("%d",&test);
	while ( test-- ) {
		int n;
		scanf("%d",&n);
		ans += tong_uoc(n);
	}
	printf("%lld",ans);
	return 0;
}
