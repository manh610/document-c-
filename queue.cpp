#include <iostream>
#include <queue>
#include <vector>
using namespace std;
main ()
{
	int x;
	priority_queue <int, vector<int>, greater<int> > q;
	// priority_queue <int> q;
	for ( int i =1; i<=5; i++) {
		cin >> x;
		q.push(x);
	}
	cout << q.size() << endl << q.top() << endl << q.empty() ;
}

// code by Manh.


