//5.Cho m?ng 1 chi?u g?m n ph?n t? nguyên, s?p x?p l?i m?ng tang d?n. R?i in ra màn hình.
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[100005];
	cout<<"NHAP SO PHAN TU CUA MANG: ";
	cin>>n;
	cout<<"MOI NHAP MANG: ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<"MANG TANG DAN: ";
	for(int j=1;j<=n;j++){
		cout<<a[j]<<" ";
	}
	return 0;
}

// code by Manh

