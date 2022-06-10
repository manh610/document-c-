#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
	int da=0,db=0;
	int b=0,c=0,d=0,e=0;
	string s;
	cin>>s;
	for(int i=1;i<=s.length();i++){
		if ( s[i]=='B' ) db++;
		else da++;
	}
	if ( da!=db ) cout<<"Nao";
	else {
		for(int i=1; i<=s.length(); i++) {
			if ( s[i]=='B' ) break;
			b++;
		}
		for(int i=b+1; i<=s.length(); i++) {
			if ( s[i]=='A' ) break;
			c++;
		}
		for(int i=s.length(); i>=1; i--) {
			if ( s[i]=='A' ) break;
			d++;
		}
		for(int i=s.length()-d; i>=1; i--) {
			if ( s[i]=='B' ) break;
			e++;
		}
		if( b+1>=c && d-1>=e ) cout<<"Sim";
		else cout<<"Nao";
	}
	return 0;
	
	
	
}
