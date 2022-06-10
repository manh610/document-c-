#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <cstring>
#include <queue>
using namespace std;
main ()
{
	deque <int> dq;
	int a[100];
	int n;
	cin >> n;
	for ( int i = 1; i<=n; i++) {
		cin >> a[i];
		if ( a[i]%2==0 ) dq.push_back(a[i]);
		else dq.push_front(a[i]);
	}
	cout << "SAP XEP : ";
	while ( !dq.empty() ) {
		cout << dq.front() << " ";
		dq.pop_front();
	}
}

// code by Manh.


