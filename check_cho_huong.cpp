#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n+5];
	for (int i = 0; i < n; i++) cin >> a[i];
	int vt = 0,Cvt = 0, count = 1, Ccount = 0;
	for (int i = 0; i < n-1; i++){
		if (a[i] < a[i+1]) count++;
		else {
			if(count > Ccount) {
				Cvt = vt;
				Ccount = count;
			}
			vt = i +1;
			count = 1;
		}
	}
	cout << Cvt << " " << Ccount;	
	return 0;
}
