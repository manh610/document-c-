#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int test;
	cin >> test;
	for ( int t=1; t<=test; t++){
		int n;
		cin >> n;
		cout << "Test "<< t <<" : " ;
		int i=2;
		while (n!=1){
			int dem=0;
			if ( n%i==0 ) {
				while ( n%i==0 ) {
					dem++;
					n/=i;
				}
				cout << i << "(" << dem << ")" << " ";
			}
			else i++;
		}
		cout << endl;
	}
}

// code by Manh.


