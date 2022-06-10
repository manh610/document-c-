#include <stdio.h>
int main ()
{
	int test;
	cin>>test;
	for ( int k=1; k<=test; k++){
		int n;
		cin>>n;
		int a[n+5],b[n+5];
		for ( int i=1; i<=n; i++) {
			scanf("%d", &a[i]);
		}
		int dem=1,j=0,m;
		for ( int i=2; i<=n; i++) {
			if ( a[i-1] < a[i] ) {
				dem++;
				m=j;
			}
			else {
				j++;
				b[j]=dem;
				dem=1;
				m=j;
			}
		}
		int s=0;
		for( int i=1; i<=m; i++) {
			s+=b[i];
		}
		b[m+1]=n-s;
		int max = b[1];
		for ( int i=1; i<=m+1; i++ ) {
			if ( b[i]>=max ) max=b[i]; 
		}
		printf("Test %d:\n",k);
		cout<<max<<endl;
		s=0;
		for ( int i=1; i<=m+1; i++) {
			s+=b[i];
			if ( b[i]==max ) {
				for ( int i=s-max+1; i<=s; i++ ) {
					printf("%d ",a[i]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
