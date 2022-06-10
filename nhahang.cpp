#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,a,b,A[1000];
	cin>>n>>a>>b;
	for (int i=1; i<=n; i++) {
		cin>>A[i];
	}
	int dem=0;
	for (int i=1; i<=n; i++) {
		int x=a+2*b;
		if ( A[i]==1 ) {
			if ( A[i]<=x ) {
				if ( a>0 ) a--;
				else {
					b--;
					a++;
				}
			}
			else {
				dem++;
			}
		}
		if ( A[i]==2 ) {
			if ( b>0 ) b--;
			else dem+=2;
		}
	}	
	cout<<dem;
	return 0;
}

// code by Manh

