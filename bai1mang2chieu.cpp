/*******************************
Vi?t CT nh?p v�o m?t ma tr?n vu�ng,
 t�nh v� in ra m�n h�nh t?ng c?a du?ng ch�o ch�nh c?a ma tr?n d�.
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

