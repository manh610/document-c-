#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

vector<long long> a,b,c;
int n1,n2,n3;
void Input() {
	cin >> n1>> n2>> n3;
	long long x;
	for ( int i = 0; i < n1; i++) {
		cin >> x;
		a.push_back(x);
	}
	for ( int i = 0; i < n2; i++) {
		cin >> x;
		b.push_back(x);
	}
	for ( int i = 0; i < n3; i++) {
		cin >> x;
		c.push_back(x);
	}
}

void Solve() {
	int i = 0,j = 0,k = 0;
	int ok = 1;
	while ( i<n1 && j <n2 && k < n3) {
		if ( a[i]==b[j] && a[i]==c[k] ) {
			ok = 0;
			cout << a[i] << " ";
			i++;
			j++;
			k++;
		} else {
			long long min = (a[i]<b[j])?((a[i]<c[k])?a[i]:c[k]):((b[j]<c[k])?b[j]:c[k]);
			if ( min==a[i] ) i++;
			if ( min==b[j] ) j++;
			if ( min==c[k] ) k++;
		}
	}
	if ( ok )cout << "-1";
	cout << endl;
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






