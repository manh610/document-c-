
#include <iostream>
using namespace std;

int giatri (int a)
{
    switch (a)
    {
        case 0:
        case 4:
        case 7:
            return 1;
        case 1:
        case 8:
            return 2;
        case 5:
            return 3;
        case 2:
            return 4;
        case 9:
            return 5;
        case 6:
            return 6;
        case 3:
            return 8;
    }
}

int main ()
{
    int A, B;
    cin>>A>>B;
    int kt=0, tmp;
    for (int i=A+1; i<=62; i++)
    {
        if (i==46 || i==56) tmp=7;
        else if (i==53) tmp==9;
        else
        {
            int du=i%10;
            tmp=giatri(du);
        }
        if (tmp==B)
        {
            kt=1;
            cout<<i;
            return 0;
        }
    }
    cout<<"0";
    return 0;
}

// code by Manh.
