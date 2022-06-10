#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

long long n;

void Input() {
	cin >> n;
}

long long tong_chu_so(long long n) {
	long long sum = 0;
	while ( n > 0 ) {
		int cuoi = n%10;
		sum += cuoi;
		n/=10;
	}
	return sum;
}

long long thuaso(long long n) {
	long long sum = 0;
	for ( long long i = 2; i <= sqrt(n); i++ ) {
		while ( n%i==0 ) {
			sum += tong_chu_so(i);
			n/=i;
		}
	}
	if ( n>1 ) sum+= tong_chu_so(n);
	return sum;
}

void Solve() {
	if ( tong_chu_so(n)==thuaso(n) ) cout << "YES";
	else cout << "NO";
	cout << endl;
}

main()
{
	IOS()
	int test; cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





