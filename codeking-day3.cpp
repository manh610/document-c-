#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

struct thuoc {
	int giet;
	int tang;
};

int a;
ll b;
thuoc c[105];

bool cmp1(thuoc a, thuoc b) {
	return (a.giet > b.giet);
}

bool cmp(thuoc a, thuoc b) {
	return ( (a.giet-a.tang) > (b.giet-b.tang) );
}

void Input() {
	cin >> a >> b;
	for ( int i = 0; i < a; i++) {
		cin >> c[i].giet >> c[i].tang;
	}
}

void Solve() {
	ll dem = 0;
	sort(c,c+a,cmp1);
	if ( c[0].giet >= b) {
		cout << "1" << endl;
		return;
	}
	sort(c,c+a,cmp);
	int tmp1 = c[0].giet;
	int tmp2 = c[0].tang;
	if ( tmp1<=tmp2 ) {
		cout << "MISSION FAILED!" << endl;
		return;
	}
	while ( b>tmp1 ) {
		dem++;
		b = b-tmp1+tmp2;
		for ( int i = 0; i < a; i++) {
			if ( c[i].giet >= b ) {
				cout << dem+1 << endl;
				return;
			}
		}
	}
	cout << dem+1 << endl;
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





