#include <stdio.h>

int n, m, k;
int den[1005];
int duong[1005];

void input() {
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	for ( int i = 0; i < m; i++) 
		scanf("%d",&den[i]);
}

void solve() {
	int ans = 0;
	// duong toi
	for ( int i = 1; i <= n; i++) 
		duong[i] = 0;
		
	// bat het den len, tim khoang chieu sang
	for ( int i = 0; i < m; i++) {
		int vitri = den[i];
		int tmp = vitri-k;
		if ( tmp < 1 ) tmp = 1;
		int tmp2 = vitri + k;
		if (tmp2>=n ) tmp2 = n;
		for ( int j = tmp; j <= tmp2; j++) {
			duong[j] = 1;
		}
	}
	
//	for ( int i = 1; i <= n; i++)
//		printf("%d ",duong[i]);
//	printf("\n");
	
	for ( int i = 1; i <= n; i++) {
		if ( duong[i]==0 ) {
//			printf("i : %d\n",i);
			int dem = 0;
			for ( int j = i; j <= n ;j++) {
				if ( duong[j]==0 ) dem++;
				else break;
			}
//			printf("i : %d\n",dem);
			if ( dem%(2*k+1)==0 ) ans += (dem/(2*k+1));
			else ans += (dem/(2*k+1) + 1);
			i += dem;
		}
	}
	printf("%d",ans);
}

int main()
{
	input();
	solve();
	return 0;
}
