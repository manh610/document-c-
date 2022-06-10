#include <iostream>
#include <algorithm>
#include <cmath>
#define max 100005
using namespace std;
int main(){
	long long a[max],b[max];
	int n,k;
	cin>>n>>k;
	for (int i = 0; i< n ; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++ ){
		cin >> b[i];
	}
	sort (a,a+n);
	sort (b,b+n);
	int vitri1=0, vitri2=0;
	int i = 0, j=0, check =0,check2=0;
	for (int k=0 ; k<n; k++){
		if(check>1 || check2 > 1) {
			cout << "NO";
			return 0;
			}
		if(a[i] != b[j]){
			if (a[i] < b[j]){
				check++;
				vitri1=i;
				i++;	
			}
			else{
				check2++;
				vitri2=j;
				j++;
			}
		}
		i++;j++;
	}
	if ( vitri1!=0 && vitri2!=0 ) {
		if ( abs(a[vitri1] - b[vitri2] ) <k ) cout<<"YES";
		else cout<<"NO";
	}
	else if ( vitri1==0 ) {
		if ( abs ( a[n-1] - b[vitri2]) <k) cout<<"YES";
		else cout<<"NO";
	}
	else {
		if ( abs(a[vitri1] - b[n-1]) <k) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}

