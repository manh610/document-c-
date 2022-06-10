#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

int v[105],w[105],x[105] = {0} , n , MAX,M,V,W;

void sort() {
	for ( int i = 1; i<=n-1; i++) {
		for ( int j = i+1; j<=n; j++) {
			if ( (double) v[i]/w[i] < (double) v[j]/w[j] ) {
				swap (v[i],v[j]);
				swap (w[i],w[j]);
			}
		}
	}
}

void Try(int i ) {
	for ( int j = 1; j>=0; j--) {
		x[i] = j;
		V += v[i]*x[i];
		W -= w[i]*x[i];
		if ( i==n ) {
			if ( W>=0 && V>MAX ) MAX = V; 
		}
		else if ( (double)V + (double)(v[i+1]*W)/w[i+1] > (double) MAX ) Try(i+1);
		V -= v[i]*x[i];
		W += w[i]*x[i];
	}
}

main ()
{
	cin >> n >> M;
	for ( int i = 1; i<=n; i++) {
		cin >> w[i] >> v[i];
	}
	V = 0;
	W = M;
	MAX = 0;
	sort();
	Try(1);
	cout << MAX;
}

// code by Manh.


