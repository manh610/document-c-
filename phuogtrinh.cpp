#include <stdio.h>
#include <math.h>
int main()
{
	int y,n,dem=0;
	float x;
	scanf("%d",&n);
	for (y=n; ;y++){
		x=1.0*n*y/(y-n);
		if (x==n*y/(y-n)) dem=dem+1;
	}
	printf ("%d",2*dem);
	return 0;
}

// code by Manh

