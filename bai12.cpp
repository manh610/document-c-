/*
12.Vi?t chuong trình nh?p vào 3 s? a,b,c (1<= c <=3). 
N?u c=1 in ra t?ng a+b, c=2 in ra hi?u a-b, 
Còn n?u c=3 thì in ra màn hình: " T? thích c?u r?i d?y!".
*/
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"nhap a,b,c: ";
	cin>>a>>b>>c;
	if(c==1) {
		cout<<"tong a,b la: %d"<<a+b;
	}
	else if(c==2){
		cout<<"hieu a,b la: %d"<<a-b;
	}
	else if(c==3){
		cout<<"to thich cau roi day";
	}
	return 0;
}

// code by Manh

