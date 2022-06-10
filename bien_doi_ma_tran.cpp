#include <stdio.h>

int max(int a, int b) {
	if ( a>b ) return a;
	return b;
}

int min(int a, int b) {
	if ( a<b ) return a;
	return b;
}

int solve(int a[][100], int n) {
	int r[n+1], c[n+1];
	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j < n; j++) {
			r[i] += a[i][j];
			c[j] += a[i][j];
		}
	}
	int maxSum = 0;
	for (int i = 0; i < n; ++i) {
		maxSum = max(maxSum, r[i]);
		maxSum = max(maxSum, c[i]);
	}
	int count = 0;
	for (int i = 0, j = 0; i < n && j < n;) {
		int tmp = min(maxSum - r[i],	maxSum - c[j]);
		a[i][j] += tmp;
		r[i] += tmp;
		c[j] += tmp;
		count += tmp;
		if (r[i]==maxSum) ++i;
		if (c[j]==maxSum) ++j;
	}
	return count;
}

void print(int a[][100], int n)
{
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1][100];
	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j < n; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d\n",solve(a,n));
	print(a,n);
	return 0;
}
