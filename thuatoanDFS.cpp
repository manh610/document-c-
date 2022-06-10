#include <iostream>
#include <vector>
using namespace std;

vector <int> ds[1005];

void nhap(int N, int M ) {
	for ( int i = 1; i<=M; ++i) {
		int u,v;
		cin >> u >> v;
		ds[u].push_back(v);
		ds[v].push_back(u);
	}
}

int chuaxet[1005];

void DFS(int u ) {
	chuaxet[u] = 0;
	cout << u << " ";
	for ( int i = 0; i<ds[u].size(); i++) {
		if ( chuaxet[ ds[u][i] ] ) {
			DFS( ds[u][i] );
		}
	}
}

void solve() {
	int N,M,u;
	cin >> N >> M >> u;
	nhap(N,M);
	for ( int i = 1; i<=N; i++) {
		chuaxet[i] = 1;
	}
	DFS(u);
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
		cout << endl;
	}

}

// code by Manh.


