#include <iostream>
using namespace std;
int main()
{
        int n,k,A[100];
        cin>>n>>k;
        for ( int i=1; i<=n; i++) {
            cin>>A[i];
        }
        int dem1=0,dem2=0;
        for ( int i=1; i<k; i++) {
            if ( A[i]>0 ) dem1++;
            else break;
        }
        for ( int i=k; i<=n; i++) {
            if ( A[i]==A[k] && A[k]>0 ) dem2++;
            else break;
        }
        cout<<dem1+dem2;
        return 0;

}

// code by Manh.
