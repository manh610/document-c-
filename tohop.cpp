#include <iostream>
using namespace std;
const int M = 1e9 +7;

long long gt(int n) {
	long long x=1;
	for ( int i=1; i<=n; i++) {
		x*=i%M;
	}
	return x;
}

int main ()
{
	int test;
	cin>>test;
	while ( test ) {
		int n,k;
		cin>>n>>k;
		cout<<gt(n)/(gt(k)*gt(n-k))<<endl;
		test--;
	}
	return 0;
}

// code by Manh
