#include <iostream>
//#include <cmath>
//#include <algorithm>
#include <cstring>
using namespace std;

int onesAndZeros(std::string s)
{
    int n = s.length();
    for ( int i = 0; i<s.length()-1; i++) {
        if ( s[i]!=s[i+1] ) {
            n-=2;
            i++;
        }
    }
    return n;
}
main ()
{

	string s;
	cin >> s;
	cout <<  onesAndZeros(s);
}

// code by Manh.


