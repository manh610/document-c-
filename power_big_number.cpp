#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
ll power(ll a, ll b, ll M) 
{ 
    if ( b==0 ) return 1;
    ll tmp = power(a,b/2,M);
    tmp = tmp*tmp%M;
    if ( b%2 ) tmp = tmp*a%M;
    return tmp;
} 
ll reduceB(string a, ll M ) 
{ 
    ll mod = 0; 
    for (int i=0; i<a.size(); i++) 
        mod = (mod*10 + a[i] - '0')%M; 
    return mod;
} 

ll powerLarge(string a, ll b, ll M) 
{ 
    ll res = reduceB(a, M); 
    return power(res,b,M); 
} 
int main() 
{ 
    int test;
    cin >> test;
    fflush(stdin);
    while ( test-- ) {
    	string a;
    	cin >> a;
    	ll b,M;
    	cin >> b >> M;
    	cout << powerLarge(a, b, M) << endl; 
	}
  
    return 0; 
} 
