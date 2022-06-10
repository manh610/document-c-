#include<iostream>
#include<cmath>
using namespace std;
int T;
void Init()
{
	do
	{
		cout << "Nhap T = ";
		cin >> T;
	}
	while( T < 1  || T > 100);
}
long GCM(long a,long b)
{
	while(a != b)
	{
		if ( a > b ) a -= b;
		else b -= a; 
	}
	return a;
}
long long LCM(long a,long b)
{
	return a*b/GCM(a,b);
}
int main(void)
{
	long a,b;
	Init();
	for(int i=0;i<T;i++)
	{
		do
		{
			cin >> a >> b;
		}
		while(a < 1 || b< 1 || a >pow(10,8) || b > pow(10,8));
		cout << GCM(a,b) << " " << LCM(a,b) << endl;
	}
 
 
}
