#include <iostream>
#include <queue>
using namespace std;

void solve() {
	int n,k;
	cin >> n >> k;
	int a[n+1];
	deque <int> q;
	for ( int i = 0; i<n; i++ ) {
		cin >> a[i];
	}
	for ( int i = 0; i<k; i++ ) {
		while ( !q.empty() && a[i]>=a[q.back()] ) {
			q.pop_back();
		}
		q.push_back(i);
	}
	for ( int i = k; i<n; i++) {
		cout << a[q.front()] << " ";
		while ( !q.empty() && q.front() <= i-k ) {
			q.pop_front();
		}
		while ( !q.empty() && a[i] >= a[q.back()] ) {
			q.pop_back();
		}
		q.push_back(i);
	}
	cout << a[q.front()];
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		solve();
		cout << endl;
	}	

}

// code by Manh.


