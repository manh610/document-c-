#include<stdio.h>
#include<math.h>
int main ()
{
	int n, a[n+5];
	scanf("%d", &n);
	for ( int i=0;i<n;i++)
		scanf("%d", a[i]);
	for ( int j=0;j<n; j++){
		for ( int k=0; k>j;k--){
			if ( a[j]< a[j-1])
				swap( a[j], a[j+1]);
				printf ("%d", a[i])
			}
	    }
 
 	return 0;
}
