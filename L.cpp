#include <iostream>
#include <algorithm>
using namespace std;
struct hope{
	int x,y;
};
int cmp(hope a, hope b){
	return (a.x < b.x);
}
int main ()
{
	int n;
	hope a[n+5];
	cin>>n;
	for ( int i=1; i<=n; i++) {
		cin>>a[i].x;
		a[i].y=i;
	}
	sort(a+1,a+n+1,cmp);
	if ( a[n-1].x==a[n].x ) cout<<"-1";
	else cout<<a[n].y;
	return 0;
}

// code by Manh.

