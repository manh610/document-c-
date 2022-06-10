#include <iostream>
using namespace std;
int main(){
	int n,d1=0,d2=0;
	cin >> n;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>> a[i];
		if (a[i]==100)	d1++;
		else d2++;
	}
	
	if(d2 %2 == 1) {
		if(d1 %2 == 1) cout << "NO";
		else cout <<"YES";
	}
	else{
		if(d1 %2 == 0) cout << "YES";
		else cout << "NO";
	}
	return 0;
}

