#include <stdio.h>

long long C(int k, int n) {
	long long a[101][101];
    for ( int i = 0; i <= k; i++) {
        for ( int j = 0; j <= n; j++) {
            if ( i==0 || i==j ) a[i][j] = 1;
            else a[i][j] = a[i][j-1] + a[i-1][j-1];
        }
    }
    return a[k][n];
}

int main()
{
	int n; scanf("%d",&n);
	scanf("\n");
	long long ans = 0;
	char s[n+1][n+1];
	for ( int i = 0; i < n; i++) {
		scanf("%s",s[i]);		
	}
	for ( int i = 0; i < n; i++) {
		int dem = 0;
		for ( int j = 0; j < n; j++) {
			if ( s[i][j]=='C') dem++;
		}
		if ( dem >= 2 ) {
			ans += C(2,dem);
		}
	}
	for ( int j = 0; j < n; j++) {
		int dem = 0;
		for ( int i = 0; i < n; i++) {
			if ( s[i][j]=='C') dem++;
		}
		if ( dem >= 2 ) {
			ans += C(2,dem);
		}
	}
	printf("%lld", ans);
	return 0;
}
