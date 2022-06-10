#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int m,n;
char a[30][30];

void Input() {
	cin >> m >> n;
	for ( int i = 0; i < n; i++) {
		for ( int j = 0; j <m; j++)
			cin >> a[i][j];
	}
}

void tim(int s, int t) {
	int hangdau = -1;
	for ( int i = 0; i <n; i++) {
		int ok = 1;
		for ( int j = s; j <=t; j++) {
			if ( a[i][j]=='1' ) {
				hangdau = i;
				ok = 0;
				break;
			}
		}
		if ( ok==0 ) break;
	}
	int hangcuoi =-1;
	for ( int i = n-1; i >=0; i--) {
		int ok = 1;
		for ( int j = s; j <=t; j++) {
			if ( a[i][j]=='1' ) {
				hangcuoi = i;
				ok = 0;
				break;
			}
		}
		if ( ok==0 ) break;
	}
	int dem1 = 0;
	for ( int i = s; i <= t; i++) {
		if ( a[hangdau][i]=='1' ) dem1++;
	}
	int dem2 = 0;
	for ( int i = s; i <= t; i++) {
		if ( a[hangcuoi][i]=='1' ) dem2++;
	}
//	cout << hangdau << " " << hangcuoi << endl;
//	cout << dem1 << " " << dem2 << endl;
	if ( dem1==5 && dem2==4 ) cout << "R";
	else if ( dem1==6 && dem2==2 ) cout << "T";
	else if ( dem1==4 && dem2==2 ) cout << "Y";
	else {
		int dem3=0;
		for ( int i = s; i <= t; i++) {
			if ( a[hangdau+1][i]=='1' ) {
				dem3++;
			}
		}
		if ( dem3==4)cout << "U";
		else cout <<"I";
	}
}

void Solve() {
	tim(0,m/2);
	tim(m/2+1,m-1);
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





