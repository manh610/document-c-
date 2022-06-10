//3.Cho m?ng 1 chi?u n ph?n t? nguyên, nh?p và in ra màn hình ki?m tra xem trong m?ng có bao nhiêu ph?n t? là u?c c?a n.
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int n,a[10005],dem=0;
	cout<<"NHAP N: ";
	cin>>n;
	cout<<"MOI NHAP MANG: ";
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(n%i==0) dem++;
	}
	cout<<"SO PHAN TU LA UOC CUA N LA: "<<dem;
	return 0;
}

// code by Manh

