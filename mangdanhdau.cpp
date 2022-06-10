include<bits/stdc++.h>
using namespace std;
int a[10]; // m?ng dánh d?u 
int main()
{
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; i++) {
		int x; 
		cin >> x; // nh?p x;
		a[x]++; // c? m?i l?n nh?p x vào thì a[x] tang lên 1 don v? 
	}
	for(int i = 1 ; i <= 10 ; i++) {
		cout << "gia tri : " << i << " xuat hien : " << a[i] << " lan " << endl;
	}
	// a[i]=k <=> i xu?t hi?n k l?n :) 
}
 
 
 
