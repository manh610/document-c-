#include <stdio.h>
#include <math.h>
int main()
{
	int n,a[20],ktratang=0,ktragiam=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n-1;i++){
		if(a[i]<=a[i+1]) ktragiam=1;
	}
	for (int i=1;i<=n-1;i++){
		if(a[i]>=a[i+1]) ktratang=1;
	}
	if(ktragiam==0) printf("descending.");
	else{
		if(ktratang==0) printf("ascending");
		else printf("none");
	}
	return 0;
}

// code by Manh

