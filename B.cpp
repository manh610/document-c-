#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int a[100][100],m,n,b[100][100];
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[i][j]=a[j][i];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// code by Manh

