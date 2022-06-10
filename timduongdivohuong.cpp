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

void DFS( int u ) {
	chuaxet[u] = 0;
	for ( int i = 0; i<ds[u].size(); i++) {
		if ( chuaxet[ ds[u][i] ] ) {
			DFS( ds[u][i] );
		}
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int N,M;
		cin >> N >> M;
		nhap(N,M);
		int hoi;
		cin >> hoi;
		while ( hoi-- ) {
			for ( int i = 1; i<=N; i++) {
				chuaxet[i] = 1;
			}
			int a,b;
			cin >> a >> b;
			DFS(a);
			if ( chuaxet[b] ) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
}

// code by Manh.


