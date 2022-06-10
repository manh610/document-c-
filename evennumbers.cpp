#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
using namespace std;

int evenNumbers(int n, int p)
{
    for ( int i = p; i>=2; i--) {
        int j = 0;
        int x = i;
        while ( i%2==0 ) {
            j++; 
            i = i/2;
        } 
        if ( j==n ) return x;
    }
    return -1;
}


main ()
{
	int n,p;
	int check = 1;
	cin >> n >> p;
	for ( int i = p; i>=2; i--) {
        int j = 0;
        int x = i;
        while ( x%2==0 ) {
            j++; 
            x = x/2;
	   } 
        if ( j==n ) {
        	cout << i;
			check = 0;	
			break;
		}
    }
    if ( check ) cout << "-1";

}

// code by Manh.


