#include <bits/stdc++.h>
#include <math.h>
const int MAX = 1e8;
using namespace std;
int main()
{
	int n,a[MAX+5],b[MAX+5],dem=1;
	while( 1 ){
		for(int j=0;j<MAX+5;j++){
			b[j]=0;
		}
		scanf("%d",&n);
		if( n==0 ) return 0;
		else{
			for(int i=1;i<=n;i++){
				scanf("%d",&a[i]);
				b[a[i]]++;
			}
			for(int j=1;j<=n;j++){
				if(b[j]!=1){
					dem=0;
					break;
				}
			}
			if(dem==1) printf("YES\n");
			else printf("NO\n");
			dem=1;
		}
	}
	return 0;
}
