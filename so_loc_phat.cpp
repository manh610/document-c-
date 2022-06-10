#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    queue<long long> q;
    long long N = pow(10, n);
    q.push(6);
    q.push(8);
    long long t;
    stack<long long> st;
    st.push(6);
    st.push(8);
    while (!q.empty())
    {
        t = q.front();
        q.pop();

        if (t * 10 + 6 < N)
        {
            st.push(t * 10 + 6);
            q.push(t * 10 + 6);
        }
        else
            break;
        if (t * 10 + 8 < N)
        {
            st.push(t * 10 + 8);
            q.push(t * 10 + 8);
        }
        else
            break;
    }
    cout << st.size() << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
