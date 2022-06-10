#include <iostream>
using namespace std;
int main()
{
    int r,c,n;
    cin>>r>>c>>n;
    char A[r+5][c+5]={0};
    for ( int k=1; k<=n; k++) {
        int a,b,g,d;
        char e;
        cin>>a>>b>>g>>d>>e;
        for ( int i=1; i<=r; i++) {
            for ( int j=1; j<=c; j++) {
                for ( int t=a; t<=g; t++) {
                    for ( int f=b; f<=d; f++) {
                        A[t][f]=e;
                    }
                }
            }
            cout<<endl;
        }
    }
    for ( int i=1; i<=r; i++) {
        for ( int j=1; j<=c; j++) {
            if ( A[i][j]==0 ) cout<<".";
             else cout<<A[i][j];
        }
        cout<<endl;
    }
    return 0;
}
