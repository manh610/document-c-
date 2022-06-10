#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

vector<int> v;
int n;

void Input() {
    cin >> n;
    v.resize(n);
    for ( int &i:v ) cin >> i;
}

void Solve() {
    ll ans = 0;
    for ( int i = 0; i < n-1; i++) {
        for ( int j = i+1; j < n; j++) {
            ans += (v[i]^v[j]);
        }
    }
    cout << ans;
}

int main()
{
    IOS()
    int test=1;
    while ( test--) {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.