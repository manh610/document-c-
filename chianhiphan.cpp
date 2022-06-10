#include <stdio.h>
#include <math.h>
int main (){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l=1,r=n,ans=1;
	while(l<=r){
		int mid =(l+r)/2;
		if(a[mid]>k){
			ans=mid;
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	printf("%d",a[ans]);
	return 0;
}
