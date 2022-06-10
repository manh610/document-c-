#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int a[100][100], c[100][100] = {0};

void init() {
	int tmp = 1;
	for ( int i = 1; i <= 8; i++) {
		for ( int j = 1; j <= 8; j++) {
			c[i][j] = tmp;
			tmp++;
		}
	}
}

void solve() {
	for ( int i = 1; i<= 8; i++) {
		for ( int j = 1; j <= 8; j++) {
			int tmp0 = c[i][j];
			int tmp1 = c[i-2][j-1];
			int tmp2 = c[i-1][j-2];
			int tmp3 = c[i+1][j-2];
			int tmp4 = c[i+2][j-1];
			int tmp5 = c[i+2][j+1];
			int tmp6 = c[i+1][j+2];
			int tmp7 = c[i-1][j+2];
			int tmp8 = c[i-2][j+1];
			if ( tmp1 > 0 ) {
				a[tmp1][tmp0] = 1;
				a[tmp0][tmp1] = 1;
			}
			else {
				a[tmp1][tmp0] = 0;
				a[tmp0][tmp1] = 0;
			}
			if ( tmp2 > 0 ) {
				a[tmp2][tmp0] = 1;
				a[tmp0][tmp2] = 1;
			}
			else {
				a[tmp2][tmp0] = 0;
				a[tmp0][tmp2] = 0;
			}
			if ( tmp3 > 0 ) {
				a[tmp3][tmp0] = 1;
				a[tmp0][tmp3] = 1;
			}
			else {
				a[tmp3][tmp0] = 0;
				a[tmp0][tmp3] = 0;
			}
			if ( tmp4 > 0 ) {
				a[tmp4][tmp0] = 1;
				a[tmp0][tmp4] = 1;
			}
			else {
				a[tmp4][tmp0] = 0;
				a[tmp0][tmp4] = 0;
			}
			if ( tmp5 > 0 ) {
				a[tmp5][tmp0] = 1;
				a[tmp0][tmp5] = 1;
			}
			else {
				a[tmp5][tmp0] = 0;
				a[tmp0][tmp5] = 0;
			}
			if ( tmp6 > 0 ) {
				a[tmp6][tmp0] = 1;
				a[tmp0][tmp6] = 1;
			}
			else {
				a[tmp6][tmp0] = 0;
				a[tmp0][tmp6] = 0;
			}
			if ( tmp7 > 0 ) {
				a[tmp7][tmp0] = 1;
				a[tmp0][tmp7] = 1;
			}
			else {
				a[tmp7][tmp0] = 0;
				a[tmp0][tmp7] = 0;
			}
			if ( tmp8 > 0 ) {
				a[tmp8][tmp0] = 1;
				a[tmp0][tmp8] = 1;
			}
			else {
				a[tmp8][tmp0] = 0;
				a[tmp0][tmp8] = 0;
			}
		}
	}
}

void result() {
	ofstream fo ("matran.out");
	for ( int i = 1; i <= 64; i++) {
		for ( int j = 1; j <= 64; j++) {
			cout << a[i][j] << " ";
			fo << a[i][j] << " ";
		}
		cout << endl;
		fo << endl;
	}
	fo.close();
}

main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    init();
    solve();
    result();
}

// code by Manh.


