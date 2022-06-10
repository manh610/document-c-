#include <iostream>
using namespace std;
int main ()
{
    int n,sum=0,s;
    cin>>n;
    int a[n+5],b[n+5][n+5];
    for ( int i=1; i<=n; i++) {
        for ( int j=1; j<=n; j++) {
            cin>>b[i][j];
            sum+=b[i][j];
        }
    }
    if ( n>2 ) {
        for ( int j=1; j<=n; j++) {
            s=0;
            for ( int i=1; i<=n; i++) {
                s+=b[i][j];
            }
            a[j] = (s-sum/(2*n-2))/(n-2);
        }
        for ( int i=1; i<=n; i++) {
            cout<<a[i]<<" ";
        }
    }
    else cout<<b[1][2]/2<<" "<<b[1][2]/2;
    return 0;
}
