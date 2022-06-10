#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;
const int N = 1000005;
main(){
	bool check[N];
	for ( int i = 2; i <= N; i++) check[i] = true;
	for ( int i = 2; i <= 1000; i++) {
		if ( check[i]==true ) {
			for ( int j = i*i; j <= N; j += i) 
				check[j] = false;
		}
	}
	int test;
	cin >> test;
	while ( test-- ) {
		ll n;
		cin >> n;
		ll x = sqrt(n);
		ll dem = 0;
		for ( int i = 2; i <= x; i++) {
			if ( check[i]==true) dem++;
		}
		cout << dem << endl;
	}
}

// code by Manh.

