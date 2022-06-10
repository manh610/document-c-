#include <iostream>
#include <algorithm>
using namespace std;

struct thoigian{
	int x,y,z;
	long long t;
};

int cmp(thoigian a, thoigian b) {
	return (a.t < b.t);
}

main ()
{
	int n;
	cin >> n;
	thoigian a[n+1];
	long long f[n+1];
	for ( int i = 1; i<=n; i++) {
		cin >> a[i].x >> a[i].y >> a[i].z;
		a[i].t = a[i].x*3600 + a[i].y*60 + a[i].z;
	}
	sort(a+1,a+1+n,cmp);
	for ( int i = 1; i<=n; i++) {
		cout << a[i].x << " " << a[i].y << " " << a[i].z << endl;
	}
}

// code by Manh.


