#include <iostream>
#include <math.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	long sumlen=0;
	long sumxuong=0;
	int minl=100000;
		int minx=100000;
	while(n--)
	{
		int a,b;
		cin >> a >> b;
		sumlen+=a;
		sumxuong+=b;
		if(a<minl) minl=a;
		if(b<minx) minx=b;
 
	}
	sumlen+=minx;
	sumxuong+=minl;
	if(sumlen>sumxuong)
	{
		cout << sumlen;
	}
	else
	{
		cout << sumxuong;
	}
}
int main (){
	solve();
 
	return 0;
}
