#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int a[100000];
int main()
{
	int i,sum=0;
	a[0]=1;
	a[1]=2;
	for(int i=2;i<=96;++i){
		a[i] = a[i-1] + a[i-2];
		if( a[i]%2==0 && a[i]<=4000000) {
			sum+=a[i];
		}
	}
	cout<<sum;
	return 0;
}

// code by Manh

