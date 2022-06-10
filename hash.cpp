#include <iostream>
#include <string.h>
const long long base = 1e9+7;
using namespace std;

long long hash[10000],p[10000];

long long gethash( int i, int j){
	return( hash[j]-hash[i-1]*p[j-i+1] + base*base)%base;
}

int main ()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	int n = s.length();
	p[0]=1;
	for ( int i=1; i<=n; i++) {
		p[i] = p[i-1]*k%base; 
	}
	hash[0]=0;
	for ( int i=1; i<=n; i++) {
		int x = s[i-1] - 48;
		hash[i] = (hash[i-1]*k + x)%base;
	}
	cout<<"hash"<<endl;
	for ( int i=1; i<=n; i++) cout<<hash[i]<<endl;
	cout<<endl;
	int m=1;
	while( m ) {
		int u,v,x,y;
		cin >> u >> v >> x >> y;
		if ( gethash(u,v) == gethash(x,y) ) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		m--;
	}
	return 0;
}

// code by Manh.

