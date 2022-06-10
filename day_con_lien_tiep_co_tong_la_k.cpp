#include <bits/stdc++.h>
#define IOS()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long int ll;
const int mod = 1e9 + 7;

vector<int> v;
queue<int> q;
int n;
ll k;

void clear(queue<int> &q)
{
    queue<int> empty;
    swap(q, empty);
}

void Input()
{
    v.clear();
    clear(q);
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void Solve()
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        q.push(v[i]);
        while (sum > k && q.size() > 0)
        {
            sum -= q.front();
            q.pop();
        }
        if (sum == k && q.size()>0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    IOS()
    int test;
    cin >> test;
    while (test--)
    {
        Input();
        Solve();
    }
    return 0;
}

// Code by Manh.