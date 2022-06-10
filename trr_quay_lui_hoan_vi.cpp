#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100];
bool check[100];
void Try(int i);
void Try2(int i);
vector<string> ans;
vector<string> ans2;
main ()
{
	int test=1;
	while ( test-- ) {
		cin >> n;
		for ( int i = 1; i <= n; i++) {
			check[i] = true;
		}
		Try(1);
		Try2(1);
		for ( int i = 0; i < ans.size(); i++) {
			for ( int j = 0; j < ans2.size(); j++){
				for ( int k = 0; k < ans[i].size(); k++) {
					cout << char(ans[i][k]+64);
				}				
				for ( int k = 0; k < ans2[j].size(); k++) {
					cout << char(ans2[j][k]+48);
				}
				cout << endl;
			}
		}
	}
}

void Try2(int i) {
	for ( int j = 1; j <= n; j++) {
			b[i] = j;
			if ( i==n ) {
				string tmp;
				for ( int k = 1; k <= n; k++) {
					tmp = tmp + char(b[k]);
				}
				ans2.push_back(tmp);
			}
			else
				Try2(i+1);
		}
	}

void Try(int i) {
	for ( int j = 1; j <= n; j++) {
		if ( check[j] ) {
			a[i] = j;
			check[j] = false;
			if ( i==n ) {
				string tmp;
				for ( int k = 1; k <= n; k++) {
					tmp = tmp + char(a[k]);
				}
				ans.push_back(tmp);
			}
			else
				Try(i+1);
			check[j] = true;
		}
	}
}



