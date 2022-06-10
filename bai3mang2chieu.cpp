#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int a[1000][1000];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin>>a[i][j];
		}
	}
	int x,y;
	cout<<"ban muon xoa hang may: ";
	cin>>x;
	cout<<"ban muon xoa cot may: ";
	cin>>y;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if( i>=x ) a[i][j] = a[i+1][j];
			if( j>=y ) a[i][j] = a[i][j+1];
 		} 
	}
	for(int i=1;i<n;++i){
		cout<<endl;
		for(int j=1;j<n;++j){
			cout<<a[i][j]<<" ";
		}
	}
	return 0;
}

// code by Manh

