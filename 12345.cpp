#include <bits/stdc++.h>
#include <math.h>
const long long c=1e7;
using namespace std;
long long power(long long a, long long b)
{
	if(b==1) return a;
	long long tmp=power(a,b/2);
	tmp=tmp*tmp%c;
	if(b%2==1) tmp=tmp*a%c;
	return tmp;
}
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}

// code by Manh

