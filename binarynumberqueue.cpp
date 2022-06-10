#include <iostream>
#include <queue>
using namespace std;

void result(int n) {
	queue <string> q;
	q.push("1");
	while ( n-- ) {
		string s1 = q.front();
		q.pop();
		cout << s1 << " ";
		string s2 = s1;
		q.push(s1.append("0") );
		q.push(s2.append("1") );
	}
}
main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		cin >> n;
		result(n);
		cout << endl;
	}

}

// code by Manh.


