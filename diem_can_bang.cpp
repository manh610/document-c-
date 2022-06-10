#include <stdio.h>

int solve(int a[], int n)
{
	if (n == 1)
		return (0);
	int trai[n+2];
	int phai[n+2];
	for (int i = 0; i < n; i++) {
		trai[i] = 0;
		phai[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (i) {
			trai[i] = trai[i - 1] + a[i];
		}
		else {
			trai[i] = a[i];
		}
	}

	for (int i = n - 1; i > 0; i--) {
		if (i <= n - 2) {
			phai[i] = phai[i + 1] + a[i];
		}
		else {
			phai[i] = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (trai[i] == phai[i]) {
			return i+1;
		}
	}
	return -1;

}

int main()
{
	int test; scanf("%d",&test);
	while ( test-- ) {
		int n;
		scanf("%d",&n);
		int a[n+2];
		for ( int i = 0; i < n; i++)
			scanf("%d",&a[i]);
		printf("%d\n",solve(a,n));
	}
	
	return 0;
}

