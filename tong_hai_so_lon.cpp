#include <iostream>
#include <cstring>
using namespace std;
typedef long long int ll;

string a,b;

void input() {
	cin >> a >> b;
}

void solve() {
	while ( a.size() < b.size() ) a = "0" + a;
	while ( b.size() < a.size() ) b = "0" + b;
	string c = "";
	int nho = 0;
	for ( int i = a.size() - 1; i >= 0; i-- ) {
		int tmp = a[i] - 48 + b[i] - 48 + nho;
		nho = tmp/10;
		tmp = tmp%10;
		c = char(tmp+48) + c;
	}
	if ( nho>0 ) c = "1" + c;
	cout << c << endl;
}

main()
{
	int test;
	cin >> test;
	while ( test-- ) {
		input();
		solve();
	}
}

// code by Manh.

