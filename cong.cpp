#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int a[1000],b[1000],c[1000],du=0;
int main()
{
	string s;
	cin>>s;
	a[0]=s.length();
	for(int i=1;i<=a[0];i++){
		a[i]=s[ a[0] -i ] -'0';
	}
	cin>>s;
	b[0]=s.length();
	for(int i=1;i<=b[0];i++){
		b[i]=s[ b[0] -i ] -'0';
	}
	c[0]=max(a[0],b[0]);
	for(int i=1;i<=c[0];i++){
		int k=a[i]+b[i]+du;
		c[i]=k%10;
		du=k/10;
	}
	if( du==1 ) c[++c[0]] = du;
	for(int i=c[0];i>0;i--){
		cout<<c[i];
	}
	cout<<endl;
	return 0;
}

// code by Manh

