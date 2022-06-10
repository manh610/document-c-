#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long long ktra(long long n) {
	if ( n==0 || n==1 ) return 0;
	else if ( n==2 || n==3 )return 1;
	else {
		for (int i=2; i <= sqrt(n); i++) {
			if ( n%i==0 ) return 0;
		}
	}
	return 1;
}

int main()
{
	for( long long i=987650000; i<987659999; i++) {
		if ( ktra(i)==1 ) printf("%lld\n",i);
	}
	return 0;
}

// code by Manh

