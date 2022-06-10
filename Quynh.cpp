#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n, a[100005];
int dem;
int ok;
int size;
int tmp1;
int index1, index2;

void Input() {
	cin >> n;
	for ( int i = 0; i < n; i++) 
		cin >> a[i];
	dem = 0;
	ok = 0;
	size = 0;
}

void Check() {
	for ( int i = 1; i< n-1; i++) {
		if ( a[i-1]>a[i] && a[i]<a[i+1] )	
			dem++;
		if ( a[i-1]<a[i] && a[i]>a[i+1] )
			dem++;
	}
	if ( dem>2 ) {
		ok = 3;
		return;
	}
	if ( dem==0 ) {
		ok = 1;
		return;
	}
	if ( dem==1 ) {
		if ( a[0]<a[1] ) {
			for ( int i = n-1; i > 0; i--) {
				if ( a[i] > a[i-1]) {
					index1 = i;
					break;
				}
			}
			index2 = n-1;
			if ( a[index2] > a[index1-1]) {
				ok = 2;
				return;
			}
			else {
				ok = 3; return;
			}
		}
		else {
			for ( int i = 0; i < n; i++) {
				if ( a[i]<a[i+1] ) {
					index2 = i;
					break;
				}
			}
			index1 = 0;
			if ( a[index1] < a[index2+1] ) {
				ok=2; return;
			}
			else {
				ok=3; return;
			}
		}
	}
	else {
		if ( a[0]<a[1] ) {
			for ( int i = 0; i < n; i++) 
				if ( a[i]>a[i+1] ) {
					index1 = i;
					break;
				}
			for ( int i = n-1; i > 0; i--) {
				if ( a[i] < a[i-1] ) {
					index2 = i;
					break;
				}
			}
			if ( a[index1] < a[index2+1] && a[index2] > a[index1-1] ) {
				ok = 2; return;
			}
			else {
				ok = 3;
				return;4
			}
		}
		else {
			ok = 3;
			return;
		}
	}
}

void Solve() {
	Check();
	if ( ok==3 ) {
		cout << "no" << endl;
		return;
	}
	if ( ok==1 ) {
		cout << "yes" << endl;
		if ( a[0]<a[1] ) 
			cout << "1 1" << endl;
		else 
			cout << "1 " << n << endl;
	}
	if ( ok==2 ) {
		cout << "yes" << endl;
		cout << index1+1 << " " << index2+1;
	}
}

main()
{
	IOS()
//	int test; cin >> test;
	Input();
	Solve();
}

// code by Manh.





