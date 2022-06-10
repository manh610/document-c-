#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for ( int i=1; i<=n; i++) {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int sum = 0;
    int dem = 0;
    for ( int i=1; i<=n; i++) {
        if ( sum <= a[i] ) {
            sum += a[i];
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
