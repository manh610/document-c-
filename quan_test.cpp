#include <iostream>
using namespace std;
long long day[10000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> day[i];
	}
	int dem = 1;
	int max = 1;
	int vitri = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (day[i + 1] >= day[i])
		{
			dem++;
		}
		else
		{
			if (max < dem)
			{
				max = dem;
				vitri = i + 1 - dem;
			}
			dem = 1;
		}
	}
	cout << vitri << " " << max << endl;
}
