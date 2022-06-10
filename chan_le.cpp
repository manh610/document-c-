#include <iostream>
#include <cstring>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	int check = 1;
	for ( int i = 0; i < s.length(); i++ ) {
		int tmp = s[i] - '0';
		if ( ( (i+1)%2==0 && (tmp)%2 ) || (i+1)%2 && tmp%2==0 ) {
			check = 0;
			break;
		} 
	}
	if ( check ) cout << "YES";
	else cout << "NO";
	cout << endl;
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
	}

}

// code by Manh.


