#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while( test ) {
        long long n;
        long long s=1;
        cin>>n;
        char A[n+5],B[n+5];
        for ( long long i=1; i<=n; i++) {
            cin>>A[i];
        }
        for ( long long i=1; i<=n; i++) {
            cin>>B[i];
        }
        for ( long long i=1; i<=n; i++) {
            if ( A[i]==B[i] ) {
                if ( A[i]=='1' ) s = s%1000000007*2%1000000007;
                else continue;
            }
            else {
                if ( A[i]=='1' ) {
                   s=0;
                   break;
                }
                else continue;
            }
        }
        if ( s==0 ) cout<<"Nope"<<endl;
        else cout<<s<<endl;
        test--;
        s=1;
    }
    return 0;
}
