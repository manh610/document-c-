#include <stdio.h>
#include <math.h>
#define N 100009   // 1e5 == 10^5
// N la so toi da
// f[N] danh dau xem f[i] phai so nguyen to
int n, f[N];

// ham con sang so nguyen to
void sangnto() {
	//gia su tat ca cac so tu 1 den n deu la so nguyen to
	for( int i = 2; i < N; i++ ) {
		f[i] = 1;
	}
	for( int i = 2; i< sqrt(N); i++ ) {
		// neu f[i] la so nguyen to
		if ( f[i] == 1) {
			//gach di tat ca cac boi cua no
			for( int j = i*i; j < N; j+=i ) {
				f[j] = 0;
			}
		}
	}
}

int main ()
{
	sangnto();
	int a;
	scanf("%d",&a);
	for (int i=1;i<=a;i++) {
		int u,v,dem=0;
		scanf("%d %d",&u, &v);
		for(int i=u;i<=v;i++) {
			if ( f[i] == 1 ) dem++;
		}
		printf("%d\n",dem);
		if(dem == 0) {
			printf("-1");
			continue;
		}
		else {
			for (int i = u; i <= v; i++) {
				if (f[i]==1) printf("%d ",i);
			}
		}
		printf("\n");
	}
	return 0;
}


















