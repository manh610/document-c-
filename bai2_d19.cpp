#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	int n; 	cin >> n;
	int a[n+4];
	for ( int i = 0; i < n; i++) cin >> a[i];
	a[n] = -100000;
	int distance = 0, index = 0, count = 1;
	for ( int i = 1; i <= n; i++) {
		if ( a[i] > a[i-1] ) {
			count++;
		}
		else {
			if ( distance < count ) {
				distance = count;
				index = i - distance;
			}
			count = 1;
		}
	}
	cout << index << " " << distance;

}

// code by Manh.

