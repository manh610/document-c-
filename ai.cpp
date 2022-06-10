#include <iostream>
using namespace std;

char me;
char mmap[20][20];

void read()
{
    cin>>me;
    for (int i=1; i<=15; i++)
    {
        for (int j=1; j<=15; j++)
            cin>>mmap[i][j];
    }
}

void process()
{
    for (int i=1; i<=15; i++)
    {
        for (int j=1; j<=15; j++)
        {
            if (mmap[i][j]=='.')
            {
                cout<<i<<" "<<j;
                return;
            }
        }
    }
}

void view()
{
    for (int i=1; i<=15; i++)
    {
        for (int j=1; j<=15; j++)
            cout<<mmap[i][j];
        cout<<endl;
    }
}

int mypoint()
{
    int d = 0;
    for (int i=1; i<=15; i++)
    {
        for (int j=1; j<=15; j++)
            if (mmap[i][j]==me)
                d++;
    }
    return d;
}

int main()
{
    read();
    process();
    
//    view();
//    cout<<mypoint();
	return 0;
}


