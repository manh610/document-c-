#include <iostream>
using namespace std;

int max(int a, int b) {
	return (a>b)?a:b;
}

main ()
{
	int n;
	cin >> n;
	int a[n+1], f[n+1];
	for ( int i = 0; i<n; i++) {
		cin >> a[i];
	}
	int result = 0;
    for (int i=0; i<n; i++) {
        f[i] = 0;
        for (int j=i-1; j>=0; j--) {
			if (a[i] > a[j]) {
            	f[i] = max(f[i], f[j]);
        	}
        }
        f[i] += 1;
        result = max(result, f[i]);
    }

	cout << result;
}

// code by Manh.


