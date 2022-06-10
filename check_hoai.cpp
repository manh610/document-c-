#include <iostream> 
using namespace std;
int main () {
	// UCLN cua cac phan tu trong mang
	int a[1005], n; long long ucln=100005;
	cin >> n;
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	for (int i=0; i<n-1; i++) {
 
		while (a[i]*a[i+1]!=0) {
			if (a[i]>a[i+1]) a[i]=a[i]%a[i+1];
			else a[i+1]=a[i+1]%a[i];
		}
		if(a[i]+a[i+1]<ucln) ucln= a[i]+a[i+1];
	}
	cout << ucln;
 
 
	return 0; 
}
