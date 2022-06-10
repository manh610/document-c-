#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int t[100];
int x[100];
int n, S, sum;
bool found;

void Input() {
	cin >> n >> S; 
	for ( int i = 1; i <= n; i++) 	cin >> t[i];
	sum = 0;
	found = false;
}

void Result() {
	for ( int i = 1; i <= n; i++) {
		if ( x[i] ) {
			cout << t[i] << " ";
		}
	}
	cout << endl;
}

void Try(int i) {
	if (found) return;	
	for ( int j = 0; j <= 1; j++) {
		x[i] = j;
		sum += x[i]*t[i];
		if ( i==n ) {
			if ( sum==S ) {
				Result();
				found = true;
			}
		} 
		else if ( sum <= S) Try(i+1);
		sum -= x[i]*t[i];
	}
}

void Solve() {
	Try(1);
}

main()
{
	IOS()
//	int test; cin >> test;
	Input();
	Solve();
}

// code by Manh.





