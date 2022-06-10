#include <iostream>
#define MAX 100005
using namespace std;
int main(){
	int check[MAX]={0};
	int n;
	cin >> n;
	int arr[n+2];
	for (int i=0;i<n;i++){
		cin>> arr[i];
		check[arr[i]]++;
	}
	for (int i=0;i<MAX; i++){
		if(check[i] %2== 1) {
			cout << i;
			break;
		}
	}
	return 0;
}

