#include <iostream>
#include <algorithm>
using namespace std;

long long n,N = 200006;
long long BIT[200006];

struct node {
	long long l,r,ans,pos;
};

node a[200006];

int comp2(node a, node b){
	return (a.pos < b.pos);
}

int comp1(node a, node b) {
	if ( a.r < b.r || (a.r==b.r && a.l>b.l) ) return 1;
	else return 0;
}

void add( int p) {
	for ( int i=p; i<N; i+=i & -i) {
		BIT[i]++;
	}
}

int sum( int p) {
	int ans=0;
	for ( int i=p; i<N; i+=i & -i) {
		ans+=BIT[i];
	}
	return ans;
}

int count( int l) {
	return sum(N-1) - sum(l-1);
}

int main ()
{
	cin>>n;
	for ( int i=0; i<n; i++) {
		cin>>a[i].l>>a[i].r;
		a[i].pos=i;
	}
	sort(a,a+n,comp1);
	for ( int i=0; i<n; i++) {
		a[i].ans = count(a[i].l);
		add(a[i].l);
	}
	sort(a,a+n,comp2);
	for ( int i=0; i<n; i++) {
		cout<<a[i].ans<<endl;
	}
	return 0;
}

// code by Manh.

