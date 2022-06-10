#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;
int main()
{
	char s[100000];
	int check[300] = {0};
	int k = 0;
	cin.get(s,100000);
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (check[s[i]] == 0)
			{
				check[s[i]]++;
			}
		else
			{
				while ((check['a' + k]) == 1)  k++;
				s[i] = 'a' + k;
				check[s[i]]++;
				k++;
			}
	}
	printf("%s",s);
	return 0;
}
