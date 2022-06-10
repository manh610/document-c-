#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;

void Input() {
	cin >> n;
}

void Solve() {
	int k = n-1;
	for ( int i = 0; i<n/2;i++)
		cout << "  ";
	for ( int i = 0; i<n;i++)
		cout << "* ";
	cout << endl;
	for ( int i = n/2+1; i < n-1; i++) {
		for ( int j = 0; j < 2*n-1; j++) {
			if ( j==k-i || j==k+i)
				cout << "* ";
			else
				cout << "  ";
		}	
		cout << endl;
	}
	for ( int i = 0; i < 2*n-1; i++) 
		cout << "* ";
	cout << endl;
	int a = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=2*n-1;j++){
			if(j==a || (j-n)==(n-a)) 
				cout << "* ";
			else 
				cout << "  ";
		}
		cout << endl;
		a++;
	}
}

main()
{
	IOS()
	int test; cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





