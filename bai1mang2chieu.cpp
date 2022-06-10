/*******************************
Vi?t CT nh?p vào m?t ma tr?n vuông,
 tính và in ra màn hình t?ng c?a du?ng chéo chính c?a ma tr?n dó.
****************************/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int a[1000][1000];
int main()
{
	int n,i,j,sum=0;
	cin>>n;
	for(int i=1;i<=n;++i) {
		for(int j=1;j<=n;++j) {
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;++i) {
		for(int j=1;j<=n;++j) {
			if (i==j) sum+=a[i][j];
		}
	}
	cout<<sum;
	return 0;
}

// code by Manh

