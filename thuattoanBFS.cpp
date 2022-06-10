#include <iostream>
#include <vector>
#include <queue>
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

void solve() {
	int N, M, u;
	cin >> N >> M >> u;
	nhap(N,M);
	queue <int> q;
	int chuaxet[1005];
	for ( int i = 1; i<=N; i++) {
		chuaxet[i] = 1;
	}
	q.push(u);
	chuaxet[u] = 0;
	while ( !q.empty() ) {
		int t = q.front(); 
		q.pop();
		cout << t << " ";
		for ( int i = 0; i<ds[t].size(); ++i) {
			if ( chuaxet[ ds[t][i] ] ) {
				q.push( ds[t][i] );
				chuaxet[ ds[t][i] ] = 0;
			}
		}
	}
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


