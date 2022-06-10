#include <iostream>
using namespace std;
int main()
{
	int n;
	char a[n];
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	int dem=0;
	for(int i=1; i<=n-2; i++) {
		if ( a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' ) {
			a[i+2]=='1';
			dem++;
			i+=2;
		}
	}
	cout<<dem;
	return 0;
	
}

