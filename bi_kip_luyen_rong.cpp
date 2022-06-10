#include <iostream>
#include <algorithm>
using namespace std;

struct note{
	int x,y;
};

int cmp(note a, note b) {
	return a.x < b.x;
}

main ()
{
	int n,s;
	cin >> s >> n;
	note a[n+5];
	for ( int i = 1; i<=n; i++) {
		cin >> a[i].x >> a[i].y;
	}
	sort(a+1, a+n+1, cmp);
	int dem = 0;
	for ( int i = 1; i<=n; i++) {
		if ( s > a[i].x ) {
			s += a[i].y;
			dem++;
		} 
	}
	if ( dem==n ) cout << "YES";
	else cout << "NO";
}

// code by Manh.


