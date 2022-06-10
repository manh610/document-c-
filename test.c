#include <stdio.h>

void solve(int n, int b) {
	int s[10000];
	int j = -1;
	int i;
	while ( n ) {
		int du = n%b;
		n/=b;
		s[++j] = du;
	}
	for ( i = j; i>=0 ;i--) {
		if ( s[i]<10 ) printf("%d",s[i]);
		else {
			char t = s[i] + 55;
			printf("%c",t);
		}
	}
	printf("\n");
}

int main()
{
	int test; scanf("%d",&test);
	while (test-- ) {
		int n,b;
		scanf("%d %d",&n,&b);
		solve(n,b);	
	}	
	return 0;
}
