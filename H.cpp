#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n,k,dem=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;a[i]<k;i++){
		for(int j=i+1;a[j]<=k;j++){
			if(a[i]+a[j]<=k) dem++;
		}
	}
	cout<<dem;
	return 0;
}

// code by Manh

