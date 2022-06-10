#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if (m % n != 0 )
        cout << "-1";
    else
    {
        if ((m/n) % 2 != 0 && (m/n) % 3 != 0) cout << "-1";
        else{
            int tmp = m / n;
            int dem = 0;
            while (tmp % 2 == 0){
                tmp/=2;
                dem++;
            }
            while (tmp % 3 == 0){
                tmp/=3;
                dem++;
            }
           	if ( tmp == 1) cout << dem;
           	else cout <<"-1";
        }
    }
    
}
