#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct node{
	string ten;
	int day, month, year;
};

int cmp(node a, node b) {
	return (a.year*365 + a.month*30 + a.day > b.year*365 + b.month*30 + b.day);
}

main ()
{
	int n;
	cin >> n;
	node a[n+2];
	for ( int i = 1; i<=n; i++) {
		cin >> a[i].ten >> a[i].day >> a[i].month >> a[i].year; 
	}
	sort(a+1,a+n+1,cmp);
	cout << a[1].ten << endl << a[n].ten;
}

// code by Manh.


