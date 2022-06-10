#include<bits/stdc++.h>
#define IOS() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9+7;

int n, k;
vector<int> v;

void Input() {
    cin >> n >> k;
    string s;
    while ( n-- ) {
        cin >> s;
        v.push_back(s.length());
    }
}

void Solve() {
    int res = 0;
    for ( int i = 0; i < v.size()-1; i++ ) {
        for ( int j = i+1; j <= i+k && j < v.size(); j++) {
            if ( v[i]==v[j])
                res++;
        }
    }
    cout << res << endl;
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