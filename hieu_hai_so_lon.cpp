#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
int a[1000],b[1000],c[1000];
using namespace std;
main ()
{
	string s;
	cin >> s;
	a[0]=s.length();
	for(int i=1; i<=a[0]; i++){
		a[i]=s[ a[0] -i ] -'0';
	}
	cin >> s;
	b[0]=s.length();
	for(int i=1; i<=b[0]; i++){
		b[i]=s[ b[0] -i ] -'0';
	}
	c[0] = max ( a[0],b[0] );
	for(int i=1; i<=c[0]; i++){
		int k = a[i] - b[i];
		if ( k < 0) {
			c[i] = k+10;
			b[i+1]++;
		} 
		else c[i] = k;
	}
	for(int i=c[0]; i>0; i--){
		if ( c[i]==0 ) c[i] = 10;
		else break;
	}
	for ( int i=c[0]; i>0; i--) {
		if ( c[i] < 10 ) cout << c[i];
	}
}
