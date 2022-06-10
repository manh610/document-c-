#include <iostream>
using namespace std;

int n,k, a[1005], Stop;

void init() {
	cin >> n;
	k = 1;
	a[k] = n;
	Stop = 0;
}

void display() {
	cout << "(";
	for (int i = 1; i <=k ;i++) {
		i!=k?cout << a[i] << " ":cout <<a[i];
	}
	cout << ")";
	cout << " ";
}

void genNext() {
	int i = k, R, S, D;
	while (i>0 && a[i] == 1) i--;
	if (i>0) {
		a[i]--;
		D = k-i+1;
		R = D/a[i];
		S = D%a[i];
		k=i;
		if (R>0) {
			for (int j = i+1; j<=i+R;j++) a[j] = a[i];
			k+=R;
		}
		if(S>0) {
			k++;
			a[k]=S;
		}
	}
	else Stop = 1;
}

main() {
	int t; cin >> t;
	while(t--) {
		init();
		while(!Stop) {
			display();
			genNext();
		}
		cout << endl;
	}
	
}

