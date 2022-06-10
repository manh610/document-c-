#include<stdio.h>

void solve(int arr[])
{
	int a1 = arr[3] - arr[0] ;
	int b1 = arr[4] - arr[1] ;
	int c1 = arr[5] - arr[2] ;
	int a2 = arr[6] - arr[0] ;
	int b2 = arr[7] - arr[1] ;
	int c2 = arr[8] - arr[2] ;
	int a = b1 * c2 - b2 * c1 ;
	int b = a2 * c1 - a1 * c2 ;
	int c = a1 * b2 - b1 * a2 ;
	int d = (-a*arr[0] - b*arr[1] - c*arr[2]) ;
	if(a * arr[9] + b * arr[10] + c * arr[11] + d == 0)
		printf("YES\n");
	else
		printf("NO\n");
}
int main()
{
	int test; scanf("%d",&test);
	while ( test-- ) {
		int arr[20];
		for ( int i = 0; i < 12; i++) 
			scanf("%d", &arr[i]);
		solve(arr);
	}
	return 0;
}

