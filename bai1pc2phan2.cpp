#include <iostream>
#define F(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int t,n,k,i,j,a[100],ok=1;

void khoitao() {
	ok = 1;
	cin >> n >> k;
	F(i,1,n) a[i] = 0;
}

void In() {
	F(i,1,n) {
		cout << a[i];
	}
	cout << endl;
}

int check() {
	int sum = 0;
	F(i,1,n) {
		if ( a[i] ) sum++;
	}
	if ( sum == k ) return 1;
	return 0;
}

void next() {
	i = n;
	while (i>0 && a[i]==1 ) {
		a[i]=0;
		i--;
	}
	if ( i>0 ) a[i] = 1;
	else ok = 0;
}
main ()
{
	cin >> t;
	while ( t-- ) {
		khoitao();
		while ( ok ) {
			if (check() ) In();
			next();
		}
	}

}

// code by Manh.


