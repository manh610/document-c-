#include <stdio.h>
#include <math.h>
int main()
{
	int n,a[1000],b[1000];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=1;i<=10000;i++){
		if(b[i]!=1){
			printf("NO"); break;
		}
		else {
			printf("YES");
			break;
		}
	}
	return 0;
}

// code by Manh

