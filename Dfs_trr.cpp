#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

vector<vector<int> > a;
vector<bool> visited;
stack<int> st;
int n,x;


void Get_data(){
	cin>>n; a.resize(n+1);
	cin >> x;
	for(int i=1;i<=n;i++) {
		a[i].resize(n+1);
		for(int j=1;j<=n;j++) cin>>a[i][j];	
	}
}
void DFS(int u){
	visited.resize(n+1); 
	for(int it = 0; it < n+1; it++ ) visited[it]=false; 
	st.push(u); visited[u]=true;
	cout<<u<<" ";
	while(!st.empty()){
		int s=st.top(); st.pop();
		for(int t=1; t<=n; t++){
			if(a[s][t]&&!visited[t]){
				visited[t]=true;
				cout<<t<<' ';
				st.push(s);
				st.push(t);
				break;
			}
		}
	}
}
/* MAIN */
main(){
	faster();
	Get_data();
	cout << "Stack DFS tree" << endl;
	DFS(x);
}

