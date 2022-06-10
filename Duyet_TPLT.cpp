#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
int matrix[20][20];
stack<int> s;
bool chuaxet[20];
queue<int> q;
vector < vector<int> > TPLT;

void Input() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		for ( int j = 1; j <= n; j++) {
			cin >> matrix[i][j];
		}
	}
}

vector<int> DFS(int u) {
	vector<int> vtor;
	s.push(u);
	vtor.push_back(u);
	chuaxet[u] = false;
	while ( !s.empty() ) {
		int tmp = s.top();
		s.pop();
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				vtor.push_back(t);
				chuaxet[t] = false;
				s.push(tmp);
				s.push(t);
				break;
			}
		}
	} 
	return vtor;
}

vector<int> BFS(int u) {
	vector<int> vtor;
	q.push(u);
	chuaxet[u] = false;
	while ( !q.empty() ) {
		int tmp = q.front();
		q.pop();
		vtor.push_back(tmp);
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				q.push(t);
				chuaxet[t] = false;
			}
		}
	}
	return vtor;
}


void Duyet_TPLT() {
	for ( int i = 1; i <= n; i++) {
		chuaxet[i] = true;
	}
	for ( int i = 1; i <= n; i++) {
		if( chuaxet[i] ) {
			vector<int> tmp = DFS(i);
			TPLT.push_back(tmp);
		}
	}
}

void Solve() {
	Duyet_TPLT();
	cout << "so thanh phan lien thong : " << TPLT.size() << endl;
	for ( int i = 0; i < TPLT.size(); i++) {
		cout << "TPLT theo DFS " << i+1 << ": ";
		for ( int j = 0; j < TPLT[i].size(); j++) {
			cout << TPLT[i][j] << " ";
		} 
		cout << endl;
	}
}

main()
{
	IOS()
//	int test; cin >> test;
	Input();
	Solve();
}

// code by Manh.





