#include <stdio.h>
#include <string.h>

int min(int a, int b) { return a<b; }

int solve(char arr[100][100], int n)
{
	int ans = 1000000;
	for (int i = 0; i < n; i++)
	{
		int tmp = 0;
		for (int j = 0; j < n; j++) {
			char temp[1000];
			strcpy(temp,arr[j]);
			strcat(temp,arr[j]);
			for ( int t = 0; t < strlen(temp)-strlen(arr[i]); t++) {
				int check = 0;
				if ( temp[t]==arr[i][0] ) {
					int q = t, ok = 0;
					for ( int k = 1; k< strlen(arr[i]); k++) {
						if ( temp[++q]!=arr[i][k] ) {
							ok = 1;
							break;
						}
					}
					if ( ok==1 ) continue;
					tmp += t;
					check = 1;
					break;
				}
				if ( check==1 ) break;
			}
		}
		ans = min(tmp, ans);
	}
	return ans;
}

int main()
{
	int n; scanf("%d", &n);
	char s[100][100];
	for ( int i = 0; i < n; i++) {
		scanf("%s",&s[i]);
	}
	printf("%d",solve(s,n));
	return 0;
}

