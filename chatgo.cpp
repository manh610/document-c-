#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e6+9;
long long n,a[N],m;

long long calc(int k) {  // ham con de tinh F[x]
      long long sum = 0;
      for ( int i=1; i<=n; i++) {
            if ( a[i]>k ) sum += a[i]-k;
      }
      return sum;
}

int B_search(int l, int r) {
	for ( int i=1; i<=30; i++) {
		int mid = (l+r)/2;
		long long ansF = calc(mid); // sky == F[mid]
		if ( ansF >= m ) l = mid;
		else r = mid - 1;
	}
	return l;
}

int main ()
{
    cin>>n>>m;
    for ( int i=1; i<=n; i++) {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
	cout << B_search(0,1000000000); 
    
    return 0;
}

