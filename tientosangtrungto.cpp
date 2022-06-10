#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool pheptoan( char c ) {
	switch (c) {
		case ( '+' ) : return true;
		case ( '-' ) : return true;
		case ( '*' ) : return true;
		case ( '/' ) : return true;
	}
	return false;
}

main ()
{
	stack < string > s;
	string str;
	getline(cin, str);
	for ( int i = str.length(); i>=0 ; i--) {
		char x = str[i];
		if ( pheptoan(x) ) {
			string op1 = s.top(); s.pop();
			string op2 = s.top(); s.pop();
			string tmp = "(" + op1 + str[i] + op2 + ")";
			s.push(tmp);
		}
		else {
			s.push( string(1, str[i]) );
		}
	}
	cout << s.top();
}

// code by Manh.


