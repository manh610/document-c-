/*7.Cho m?ng 1 chi?u g?m n ph?n t? nguy�n, 
nh?p v�o m?t ph?n t? x, x�a ph?n t? th? x trong m?ng, 
sau d� thay th? nhung s? 8 trong m?ng b?ng x, 
ti?p theo ch�n th�m s? 9 v�o v? tr� x+2. 
M?i thao t�c th?c hi�n xong in k?t qu? ra m�n h�nh.
*/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int n,a[100005];
	cout<<"NHAP SO PHAN TU CUA MANG: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int x;
	cout<<"NHAP PHAN TU X: ";
	cin>>x;
	for(int i=x;i<=n-1;i++){
		a[i]=a[i+1];
	}
	cout<<"XOA PHAN TU THU X: ";
	for(int i=1;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<"THAY SO 8 BANG X: ";
	for(int i=1;i<n;i++){
		if( a[i]==8 ){
			a[i]=x;
		}
		cout<<a[i]<<" ";
	}
	cout<<endl<<"CHEN THEM SO 9 VAO VI TRI X+2: ";
	for(int i=x+3;i<=n;i++){
		a[i]=a[i-1];
	}
	a[x+2]=9;
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

// code by Manh

