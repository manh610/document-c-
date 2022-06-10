#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n,m;
		cin >> n >> m;
		vector <int> a,b;
		int l = n+m;
		int x;
		for ( int i = 0; i < l; i++) {
			cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		cout << a[0] << " ";
		for ( int i = 1; i < n+m; i++) {
			if ( a[i]!=a[i-1] ) cout << a[i] << " ";
			else { 
				b.push_back(a[i]);
			}
		}
		cout << endl;
		for ( int i = 0; i <b.size(); i++) cout << b[i] << " ";
		cout << endl;
	}
}

// code by Manh.

