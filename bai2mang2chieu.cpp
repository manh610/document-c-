#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int a[1000][1000];
int main()
{
	int n,i,j,max;
	cin>>n;
	for(int i=0;i<n;++i) {
		for(int j=0;j<n;++j) {
			cin>>a[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<n;++i) {
		max = a[i][0];
		for(int j=0;j<n;++j) {
			if( max <= a[i][j] ) {
				max = a[i][j];
			}
		}
		cout<<"max hang "<<i+1<<" la "<<max<<endl;
	}
	
	return 0;
}

// code by Manh

