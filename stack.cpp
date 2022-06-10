#include <iostream>
#include <stack>
using namespace std;
main ()
{
	int n,*tmp,*a;
	stack <int> s;
	cin >> n;
	a = new int [n+1];
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
	}
	tmp = new int [n+1];
	for ( int i = n; i>=1; i-- ) {
		while ( !s.empty() && s.top() < a[i] ) {
			s.pop();
		} 
		if ( s.empty() ) tmp[i] = -1;
		else tmp[i] = s.top();
		s.push(a[i]);
	}
	for ( int i =1; i<=n; i++) {
		cout << tmp[i] << " ";
	}
	delete tmp;
	delete a;
}

// code by Manh.


