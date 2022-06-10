#include <iostream>
using namespace std;
int main()
{
      int test;
      cin>>test;
      while ( test ) {
        long long n;
        int a,b;
        cin>>n>>a>>b;
        if ( b>2*a ) {
            cout<<n*a<<endl;
        }
        else {
            long long x,y;
            x = n/2;
            y = n%2;
            cout<<x*b+y*a<<endl;
        }
        test--;
      }
    return 0;
}
