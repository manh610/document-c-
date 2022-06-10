#include <stdio.h>

int uoc_le(int n) {
	for ( int i = n; i>=1; i--) {
		if ( n%i==0 && i%2==1 ) return i;
	}
}

int ktra(int i) {
	return (i & (i-1))==0;
}

int main ()
{
	int n, i = 1, ans;
	printf ("moi ban nhap n : ");
	scanf ( "%d", &n);
	printf ("uoc so le lon nhat : %d", uoc_le(n));
	for ( int i = n; i >=1; i--) {
		if ( n%i==0 && ktra(i) ) {
			ans = i;
			break;
		}
	}
	printf ("\nuoc so lon nhat la luy thua cua 2 : %d", ans);
	return 0;
}
