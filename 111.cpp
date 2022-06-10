#include <stdio.h>
#include <math.h>
int main () 
{
	int a,b;
	int j,t;
	scanf("%d %d",&a, &b);
	int A[a+5];
	for(int i=1; i<=a; i++) {
		scanf("%d",&A[i]);
	}
	int s=0;
	for( int i=1; i<=a; i++) {
		s+=A[i];
		if ( s>b ) {
			t=i-1;
			break;
		}
	}
	int m=0;
	for( int i=a; i>=1; i--) {
		m+=A[i];
		if ( m>b ) {
			j=a-i;
			break;
		}
	}
	if (j>t) printf("Jerry");
	if (j==t) printf("Equal");
	if (j<t) printf ("Tom");
	
	return 0;
}
