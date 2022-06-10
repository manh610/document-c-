#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
int matrix[20][20];
stack<int> st;
bool chuaxet[20];
queue<int> q;
int truoc[100] = {0};
int s,t;
bool can = true;

void Input() {
	cin >> n;
	for ( int i = 1; i <= n; i++) {
		for ( int j = 1; j <= n; j++) {
			cin >> matrix[i][j];
		}
	}
	for ( int i = 1; i <= n; i++) {
		chuaxet[i] = true;
	}
	cin >> s >> t;
}

void DFS(int u) {
	st.push(u);
	chuaxet[u] = false;
	while ( !st.empty() ) {
		int tmp = st.top();
		st.pop();
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				chuaxet[t] = false;
				st.push(tmp);
				st.push(t);
				truoc[t] = tmp;
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
		for ( int t = 1; t <= n; t++) {
			if ( matrix[tmp][t] && chuaxet[t] ) {
				q.push(t);
				chuaxet[t] = false;
				truoc[t] = tmp;
			}
		}
	}
}

vector<int> Ghi_nhan_duong_di(int s, int t) {
	vector<int> ans;
	if ( truoc[t]==0 ) {
		can = false;
		return ans;
	}
	else {
		ans.push_back(t);
		int u = truoc[t];
		while ( u!=s ) {
			ans.push_back(u);
			u = truoc[u];
		}
		ans.push_back(s);
	}
	return ans;
}

void Solve() {
	DFS(s);
	if ( !can ) {
		cout << "KHONG CO DUONG DI";
	} 
	else {
		vector<int> ans = Ghi_nhan_duong_di(s,t);
		for ( int i = ans.size()-1; i >=0; i--) 
			(i==0)?cout<<ans[i]:cout<<ans[i]<<" -> ";
	}
}

main()
{
	IOS()
	Input();
	Solve();
}

// code by Manh.





