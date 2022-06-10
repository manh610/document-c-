#include <bits/stdc++.h>
using namespace std;
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long i64;
const int MAX=1e5+5;
string a;
int n,k;
vector <string> res;

void Input(){
	cin>>n>>k;
}
void process(){
    int ok=0;
    for(int i=0;i<n-k+1;i++){ // tach thanh cac xau co do dai la k, i : 1 -> 3
        int cnt=0;
        for(int j=i;j<i+k;j++)
            if(a[j]=='A') cnt++;
        if(cnt==k) ok++;
    }
    if (ok==1) res.push_back(a);
}
void Try(int i){
    for(char j='A';j<='B';j++){
        a[i]=j;
        if(i==n-1) process();
        else Try(i+1);
    }
}
void Solve(){
	a.resize(n); //init();
	Try(0);
    cout<<res.size()<<endl;
    for(int i = 0; i < res.size(); i++) cout<<res[i]<<endl;
}
int main(){
	faster();
	int Test=1;
//	cin>>Test;
	for(int i=1;i<=Test;i++) {Input();Solve();}
	cerr << "\nRunning is : " << 1.0*clock()/1000;
	return 0;
}
