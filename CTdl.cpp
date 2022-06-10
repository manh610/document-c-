#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int Giaithua(int n) {
	if ( n==0 ) return 1;
	return n*Giaithua(n-1);
}

int Gcd(int a, int b) {
	if ( b==0 ) return a;
	return Gcd(b,a%b);
}

int so_chu_so(int n) {
	if ( n<10 ) return 1;
	return so_chu_so(n/10)+1;
}

bool doi_xung(string s, int i, int j) {
	if ( i==s.size()/2 ) return true;
	if ( s[i]!=s[j] ) return false;
	return doi_xung(s,i+1,j-1);
}

main()
{
	IOS()
	int n;
	cin >> n; cout << Giaithua(n) << endl;
	int a,b;
	cin >> a >> b; cout << Gcd(a,b) << endl;
	int c; 
	cin >> c; cout << so_chu_so(c) << endl;
	string s; cin >> s;
	(doi_xung(s,0,s.size()-1))?(cout<<"yes"):(cout<<"no");
}

// code by Manh.





