#include <iostream>
#include <cstring>
using namespace std;
typedef long long int ll;

string a,b;

void input() {
	cin >> a >> b;
}

void solve() {
	string ans = "";
	int n = a.size();
	int m = b.size();
	int len = n+m-1;
	int nho = 0;
	for ( int i = len; i >=0; i--) {
		int tmp = 0;
		for ( int j = n-1; j >= 0; j--){
			if ( i-j <= m && i-j>=1 ) {
				int a1 = a[j] - 48;
				int b1 = b[i-j-1] - 48;
				tmp += a1*b1;
			}
		}
		tmp += nho;
		nho = tmp/10;
		ans = char(tmp%10 + 48) + ans; 
	}
	while (ans.size()>1 && ans[0]=='0') ans.erase(0,1);
	cout << ans << endl;
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

