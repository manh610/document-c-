#include <stdio.h>

long long UCLN(long long a, long long b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}
 
int main(){
	int T;
	scanf("%d", &T);
	while (T--) {
		long long n,a[20];
		scanf("%d",&n);
		for ( long long i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		long long ans = a[0];
		for( long long i = 1; i < n; i++){
			ans = (ans*a[i])/UCLN(ans,a[i]);
		}
		printf("%d\n", ans);
	}
	return 0;
}
