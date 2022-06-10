#include <stdio.h>
int main()
{
	int n, a[100]; 
	scanf ("%d", &n);
	for ( int i = 0; i<n; i++) {
		scanf ("%d", &a[i]);
	}
	int x, vitri;
	scanf ("%d %d", &x, &vitri);
	for ( int i = n; i>vitri; i--) {
		a[i] = a[i-1];
	}
	a[vitri] = x;
	n++;
	for ( int i = 0; i<n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
