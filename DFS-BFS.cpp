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

void Renit() {
	for ( int i = 1; i <= n; i++) {
		chuaxet[i] = true;
	}
}

void Input() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		for ( int j = 1; j <= n; j++) {
			cin >> matrix[i][j];
		}
	}
	Renit();
}

void DFS(int u) {
	s.push(u);
	cout << u << " ";
	chuaxet[u] = false;
	while ( !s.empty() ) {
		int tmp = s.top();
		s.pop();
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				cout << t << " ";
				chuaxet[t] = false;
				s.push(tmp);
				s.push(t);
				break;
			}
		}
	} 
}

void BFS(int u) {
	q.push(u);
	chuaxet[u] = false;
	while ( !q.empty() ) {
		int tmp = q.front();
		q.pop();
		cout << tmp << " ";
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				q.push(t);
				chuaxet[t] = false;
			}
		}
	}
}

void Solve() {
	cout << "DFS : ";
	DFS(1);
	cout <<  endl;
	Renit();
	cout << "BFS : ";
	BFS(1);
}

main()
{
	IOS()
	Input();
	Solve();
}

// code by Manh.





