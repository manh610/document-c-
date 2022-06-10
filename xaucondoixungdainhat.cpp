#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		string s;
		cin >> s;
		int n = s.length();
		int x,y,ans = 1, tmp;
		for ( int i =1; i<n; i++) {
			x = i;
			y = i + 1;
			tmp = 0;
			while ( x>=0 && y<n && s[x]==s[y] ) {
				x--;
				y++;
				tmp+=2;
			}
			ans = max ( ans, tmp);
			x = i-1;
			y = i+1;
			tmp = 1;
			while ( x>=0 && y<n && s[x]==s[y] ) {
				x--;
				y++;
				tmp+=2;
			}
			ans = max ( ans, tmp);
		}
		cout << ans << endl;
	}
	
}

// code by Manh.


