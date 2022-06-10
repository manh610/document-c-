#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
struct note {
	int x,y;	
};
int cmp(note a, note b){
	return (a.y < b.y);
}
int main()
{
	note a[1000];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a+1,a+1+n,cmp);
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<a[i].x<<" "<<a[i].y;
		cout<<endl;
	}
	return 0;
}

// code by Manh

