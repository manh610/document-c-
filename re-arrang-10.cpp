#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		string s;
		cin >> s;
		stack <int> a;
		int len = s.size();
		for ( int i = 0; i <= len; i++) {
			if ( s[i]=='I' || i== len ) {
				cout << i+1;
				while ( !a.empty() ) {
					cout << a.top();
					a.pop();
				}
			}
			else if ( s[i]=='D') {
				a.push(i+1);
			}
		}
		cout << endl;
	}
}

// code by Manh.

