#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int cmp( string x, string y ) {
	string xy = x + y;
	string yx = y + x;
	if ( xy > yx ) return 1;
	else return 0;
}

void solve( vector <string> arr) {
	sort ( arr.begin(), arr.end(), cmp );
	for ( int i = 0; i<arr.size(); i++) {
		cout << arr[i];
	}
}

main ()
{
	int test;
	cin >> test;
	while ( test-- ) {
		int n;
		string str;
		vector <string> arr;
		cin >> n;
		for ( int i = 0; i<n; i++) {
			cin >> str; arr.push_back(str);
		}
		solve(arr);
		cout << endl;
	}

}

// code by Manh.


