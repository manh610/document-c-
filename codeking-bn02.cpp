#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n;
int a[10005];

void Input() {
	cin >> n;
	for ( int i = 0; i < n; i++)
		cin >> a[i];
}

string Xuly(int arr[], int n) 
{ 
    int gcd = arr[0]; 
  
    int maxEle = arr[0]; 
    for (int i = 1; i < n; i++) { 
        gcd = __gcd(gcd, arr[i]); 
        maxEle = max(maxEle, arr[i]); 
    } 
  
    int totalMoves = (maxEle / gcd) - n; 
  
    if (totalMoves % 2 == 1) 
        return "Lema"; 
  
    return "Bi"; 
} 

void Solve() {
	cout << Xuly(a,n) << endl;
}

main()
{
	IOS()
	int test; cin >> test;
	while ( test-- ) {
		Input();
		Solve();
	}
}

// code by Manh.





