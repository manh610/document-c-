#include <iostream>
using namespace std;
int main(){
	int test;
	cin>>test;
	while ( test-- ) {
		int n;
    	cin >> n;
    	for(int i = 2; i <= n; i++){
        	while(n % i == 0){
            	n /= i;
            	cout << i;
            	if ( n > 1 ) cout << " x ";
        	}
    	}
    	cout<<endl;
	}
	return 0;
}