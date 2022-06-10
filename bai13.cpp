//13.Vi?t chuong trình cho nh?p 3 s? b?t kì và ki?m tra xem 3 s? dó có th? là 3 c?nh c?a m?t tam giác hay không?
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if( (a+b>c) && (b+c>a) && (a+c>b) ){
		cout<<"LA 3 CANH CUA TAM GIAC";
	}
	else cout<<"KHONG LA 3 CANH CUA TAM GIAC";
	return 0;
}

// code by Manh

