#include <iostream>
using namespace std;
int main ()
{
    long long a[55];
    for ( int i=2; i<=50; i++) {
        a[1] = 1;
        a[i] = a[i-1]*2;
    }
    int test;
    cin>>test;
    while ( test ) {
        int n,dem=1;
        long long step=2,k;
        cin>>n>>k;
        for ( int i=1; i<=n; i++) {
            if ( (k-a[i])%step==0 ) {
                cout<<dem<<endl;
                break;
            }
            else {
                dem++;
                step*=2;
            }
        }
        test--;
    }
    return 0;
}

// code by Manh
