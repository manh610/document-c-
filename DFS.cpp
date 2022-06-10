#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
#include <vector>
using namespace std;

void solve() {
	int V,E;
	vector < int > *a;
	cin >> V >> E;
	a = new vector <int> [V+1];
	for ( int i = 0; i<E ; i++) {
		int u,v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for ( int u = 0; u<V; u++) {
		cout << u;
		for ( int v = 0; v<a[u].size(); v++) {
			cout << " -> "  << a[u][v];
		}
		cout << endl;
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
	}

}

// code by Manh.


