#include <stdio.h>

struct time{
	int h,p,s;
};

int main()
{
	int n;
	scanf("%d",&n);
	struct time a[n+1];
	for ( int i = 0; i< n; i++) {
		scanf("%d%d%d", &a[i].h, &a[i].p, &a[i].s);
	}
	for ( int i = 0; i < n-1; i++) {
		for ( int j = i+1; j < n; j++) {
			if ( a[i].h > a[j].h ) {
				struct time t = a[i];
				a[i] = a[j];
				a[j] = t;
			} else if ( a[i].h==a[j].h && a[i].p > a[j].p ) {
				struct time t = a[i];
				a[i] = a[j];
				a[j] = t;
			} else if ( a[i].h==a[j].h && a[i].p==a[j].p && a[i].s > a[j].s ) {
				struct time t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for ( int i = 0; i < n; i++) {
		printf("%d %d %d\n",a[i].h, a[i].p, a[i].s);
	}
	return 0;
}
