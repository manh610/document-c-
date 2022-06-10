#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 

main()
{
	int n; cin >> n;
	int a[n+3];
	for ( int i = 0; i < n; i++) cin >> a[i];
	int ans = a[0];
	for ( int i = 1; i < n; i++) {
		ans = gcd(ans,a[i]);
	} 
	cout << ans;
}

// code by Manh.

