#include <bits/stdc++.h>
using namespace std;
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
typedef long long int ll;

int n,m;

void Input() {
	cin >> n >> m;
}

void Solve() {
	if ( m%n!=0 ) {
		cout << "-1";
		return;
	}
	int tmp = m/n;
	int dem = 0;
	for(int i = 2; i <= tmp; i++){
        while(tmp % i == 0){
            tmp /= i;
            dem++;
            if ( i!=2 && i!=3 ) {
            	cout << "-1";
            	return;
			}
        }
    }
    cout << dem; 
}

main()
{
	IOS()
	Input();
	Solve();
}

// code by Manh.





