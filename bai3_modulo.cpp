#include <iostream>
using namespace std;

void solve() {
	int n;
	long long k;
	cin >> n >> k;
	long long tmp = (k-1)*k/2;
	int nguyen = n/k;
	int du = n%k;
	long long tmp2 = du*(du+1)/2;
	cout << tmp*nguyen + tmp2 << endl;
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


