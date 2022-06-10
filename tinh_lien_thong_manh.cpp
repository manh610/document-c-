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

void Input() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		for ( int j = 1; j <= n; j++) {
			cin >> matrix[i][j];
		}
	}
}

void Renit() {
	for ( int i = 1; i <= n; i++) {
		chuaxet[i] = true;
	}
}

void DFS(int u) {
	s.push(u);
	chuaxet[u] = false;
	while ( !s.empty() ) {
		int tmp = s.top();
		s.pop();
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				chuaxet[t] = false;
				s.push(tmp);
				s.push(t);
				break;
			}
		}
	} 
}

int BFS(int u) {
	int count = 0;
	q.push(u);
	chuaxet[u] = false;
	while ( !q.empty() ) {
		int tmp = q.front();
		q.pop();
		count++;
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				q.push(t);
				chuaxet[t] = false;
			}
		}
	}
	return count;
}

bool Check(int j) {
	int isCheck =  BFS(j);
	return (isCheck==n)?true:false;
}

bool Strongly_Connected() {
	Renit();
	for ( int i = 1; i <= n; i++) {
		if ( !Check(i) )
			return false;
		Renit();
	}
	return true;
}

void Solve() {
	if ( Strongly_Connected() ) 
		cout << "Lien thong manh";
	else
		cout << "Khong lien thong manh"; 
}

main()
{
	IOS()
	Input();
	Solve();
}

// code by Manh.





