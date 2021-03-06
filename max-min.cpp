#include <iostream>
using namespace std;

void findSmallest(int m, int s)
{
	if (s == 0)
	{
		(m == 1)? cout << 0 : cout << "-1";
		return ;
	}

	if (s > 9*m)
	{
		cout << "-1";
		return ;
	}
	int res[m];
	s -= 1;
	for (int i=m-1; i>0; i--)
	{
		if (s > 9)
		{
			res[i] = 9;
			s -= 9;
		}
		else
		{
			res[i] = s;
			s = 0;
		}
	}
	res[0] = s + 1;
	for (int i=0; i<m; i++)
		cout << res[i];
}

void findLargest(int m, int s)
{
    if (s == 0)
    {
        (m == 1)? cout << 0: cout << "-1";
        return ;
    }
 
    if (s > 9*m)
    {
        cout << "-1";
        return ;
    }
    int res[m];
    for (int i=0; i<m; i++)
    {
        if (s >= 9)
        {
            res[i] = 9;
            s -= 9;
        }
        else
        {
            res[i] = s;
            s = 0;
        }
    }
    for (int i=0; i<m; i++)
        cout << res[i];
}

int main()
{
	int n,s;
    cin >> n >> s;
    findSmallest(n,s);
    cout << " ";
    findLargest(n,s);
}
