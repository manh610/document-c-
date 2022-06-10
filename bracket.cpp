#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
main ()
{
	string str;
	getline(cin ,str);
	stack <int> s;
	int dem = 0;
	for ( int i = 0; i< str.length(); i++) {
		if ( str[i]=='(') {
			dem++;
			s.push(dem);
			cout << dem << " ";
		}
		if ( str[i]==')') {
			cout << s.top() << " ";
			s.pop();
		}
	}
}

// code by Manh.


