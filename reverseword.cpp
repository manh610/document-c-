#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

main ()
{
	stack < string > s;
	string str;
	getline(cin, str);
	for ( int i = 0; i<str.length(); i++) {
		if ( str[i]==' ') {
			while ( !s.empty() ) {
				cout << s.top();
				s.pop();
			}
			cout << " ";
		}
		else s.push( string(1,str[i]) );
	}
	while ( !s.empty() ) {
		cout << s.top();
		s.pop();
	}
}

// code by Manh.


