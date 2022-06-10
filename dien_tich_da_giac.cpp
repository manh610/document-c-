#include <stdio.h>
#include <math.h>

struct point {
	int x,y;
};

int main()
{
	int test; scanf("%d", &test);
	while ( test-- ) {
		int n; scanf("%d", &n);
		struct point a[n+2];
		for ( int i = n-1; i >=0 ; i--) {
			scanf("%d %d", &a[i].x, &a[i].y );
		}
		float ans = 0;
		for ( int i = 0; i < n-1; i++) {
			ans += (a[i].x*a[i+1].y-a[i].y*a[i+1].x);
		}
		ans += (a[n-1].x*a[0].y - a[0].x*a[n-1].y);
		if ( ans< 0) ans = -ans;
		printf("%.3f\n",ans/2.0);
	}
	return 0;
}
