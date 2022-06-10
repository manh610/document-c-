#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long int ll;

int n, a[20];

void in_mh() {
	for ( int i = 0; i < n; i++)
		if (a[i]==0 ) 
			cout << "A";
		else
			cout << "B";
	cout << " ";
}

void quay_lui(int j) {
	for ( int i = 0; i <= 1; i++ ) {
		a[j] = i;
		if ( j==n-1)
			in_mh();
		else
			quay_lui(j+1);
	}
}

main()
{
	IOS()
	int test;
	cin >> test;
	while ( test-- ) {
		cin >> n;
		quay_lui(0);
		cout << endl;
	}
}

// code by Manh.




