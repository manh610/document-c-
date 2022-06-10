#include <iostream>
#include <cmath>
using namespace std;
int a[1000005]={0};
main (){
	int test;
	cin >> test;
	for(int i = 2; i <= 1000; i++){
		if( a[i]==0 ){
			for( int j = i*i; j <= 1000000; j+=i){
				a[j] = 1;
			}
		}
	}
	while( test-- ) {
		long long n;
		cin >> n;
		int x = sqrt(n);
		long long dem = 0;
		for( int i = 2; i <= x; i++){
			if(a[i]==0){
				dem++;
			}
		}
		cout << dem << endl;
	}
}
//Code by Manh

