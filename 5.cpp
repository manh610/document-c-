#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	for(long long i=1;i<=1000000000000000;++i) {
		int j=2;
		while (i%j==0) {
			j++;
			if( j==21) {
				cout<<i;
				return 0;
			}
		}	
	}	
return 0;
}

// code by Manh

