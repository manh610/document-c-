#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define whatis(a) cout << #a " is " << (a) << endl;
using namespace std;

void tinh (int a[], int n, int k) {
	int L[10005] = {0};
	L[0] = 1;
	for ( int i = 1; i<=n; i++) {
		for ( int t = k; t>=a[i]; t--) {
			if ( L[t]==0 && L[t-a[i]]==1 ) L[t]=1; 
		}
	}	
	if ( L[k]==1 ) cout << "YES" << endl;
	else cout << "NO" << endl;
}

main ()
{
	IOS;
	//int test;
	//cin >> test;
	//while ( test-- ) {
		int n, k;
		cin >> n >> k;
		int a[n+2];
		for ( int i=1; i<=n; i++) {
			cin >> a[i];
		}
		tinh(a,n,k);
	//}

}

// code by Manh.


