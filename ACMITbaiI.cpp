#include <iostream>
#include <math.h>
using namespace std;

long long power (  int a, int b) {
	if ( b==1 ) return a;
	else if ( b==0 ) return 1;
	else {
		long long x = power ( a, b/2);
		if ( b%2==0 ) return x*x;
		else return x*x*a;
	}
}

int main(){
	int x,n;
	cin >> n >> x;
	long long arr[12];
	for (int i = 0; i<= n; i++){
		cin >> arr[i];
	}
	long long s=0;
	int tmp =n;
	for (int i =0; i< n; i++){
		if ( arr[i]==0 ) continue;
		tmp--; 
		s+= (tmp+1) *arr[i] *power(x,tmp);
	}
	cout << s;
	return 0;
}

