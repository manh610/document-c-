#include<bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[1000];
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	for (int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

// code by Manh

