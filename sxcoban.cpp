#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[10005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}

// code by Manh

