#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[10000];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d\n",&a[i]);
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

// code by Manh

