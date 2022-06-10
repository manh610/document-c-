#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
struct node {
	int x,y;	
};
int cmp(node a, node b){
	return (a.x < b.x);
}
int main()
{
	node a[1000];
	int n,k,i;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a,a+n,cmp);
	for( i=0;i<n;i++){
		if(k>=a[i].x) k+=a[i].y;
		else break;
	}
	if (i==n) i--;
	cout<<"KILLED "<< i+1<<endl;
	return 0;
}

// code by Manh

