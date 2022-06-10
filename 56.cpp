#include <bits/stdc++.h>
#include <math.h>
int ktra(int n)
{
	int a,x;
		a=0;
		x=n;
	while(n!=0){
		a=a*10+n%10;
		n=n/10;
	}
	if (a==x) return 1;
	else return 0;
}
int main()
{
	for(int i=100000;i<=999999;++i) {
		if(ktra(i)==1) 
		printf("%d\n",i);
	}
	return 0;
}

// code by Manh

