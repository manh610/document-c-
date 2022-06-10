#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
const int N = 1e6;
using namespace std;
struct iphone{
	int x,y,z;
};
int cmp (iphone a, iphone b){
	return (a.z > b.z);
}
int main()
{
	iphone a[100000];
	int i,n,m,tong=0;
	cin>>n>>m;
	for(int j=0;j<n;j++){
		cin>>a[j].x;
	}
	for(int j=0;j<n;j++){
		cin>>a[j].y;
	}
	for(int j=0;j<n;j++){
		a[j].z = a[j].y-a[j].x;
	}
	sort(a,a+n,cmp);
	for(int i=0; ; i++){
		if( a[i].z < 0 || i>m) break;
		tong=tong+a[i].z;
	}
	cout<<tong;
	return 0;
}

// code by Manh
