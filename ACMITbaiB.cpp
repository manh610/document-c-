#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	long long m,k;
	cin >> t;
	while (t--){
		cin >> m >> k;
		long long s=0,ans;
		long long n = sqrt(1.0*(2*m)/k +1.0*1/4)-1.0*1/2;
		ans = k*n + ( m - (n*(n+1)/2)*k )/(n+1);
		cout<<ans<<endl;
	}
	return 0;
}

