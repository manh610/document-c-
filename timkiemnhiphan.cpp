#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
main ()
{
	int a[100];
	int n;
	cout << "NHAP SO LUONG PHAN TU: ";
	cin >> n;
	cout << "NHAP MANG: ";
	for ( int i=1; i<=n; i++) {
		cin >> a[i];
	}
	sort (a+1, a+n+1);
	cout << "MANG DA SAP XEP LA: ";
	for ( int i=1; i<=n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "NHAP SO LAN TRUY VAN: ";
	int t;
	cin >> t;
	while (t--) {
		int x;
		cout << "NHAP SO CAN TIM: ";
		cin >> x;
		int l = 1, r = n;
		while ( l<=r ) {
			int mid = (l+r)/2;
			if ( a[mid] == x ) {
				cout << "VI TRI DO LA: " << mid;
				break;
			}
			if ( a[mid] > x ) r = mid-1;
			else l = mid +1;
		}
		if (l>r) cout << "KHONG CO TRONG MANG";
		cout << endl;
	}
}

// code by Manh.


