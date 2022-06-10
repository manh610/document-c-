#include <iostream>
using namespace std;
int main(){
	int ar,b,f,k;
	cin >> ar >> b >> f >> k;
	long long a[k+5];
	a[1]=f;
	for ( int i=2; i<k+1; i++) {
		if ( i%2==0 ) a[i]=2*(ar-f);
		else a[i] = 2*f;
	}
	if ( k%2 ) a[k+1] = ar-f;
	else a[k+1]=f;
	for (int i = 1; i<=k+1; i++){
		if(a[i]>b){
			cout << "-1";
			return 0;
		}
	}
	int ss =0;
	int dem = 0;
	for ( int i= 1  ; i<= k+1 ;i++ ){
		ss += a[i];
		if(ss >b ){
			i--;
			dem++;
			ss = 0;
		}
	}
	cout << dem;
	return 0;
}

