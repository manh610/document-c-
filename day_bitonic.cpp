#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n)
{
	int max_sum = INT_MIN;
	int inc[n], dec[n];
	for (int i = 0; i < n; i++) {
		dec[i] = arr[i];
		inc[i] = arr[i];
	}
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && inc[i] < inc[j] + arr[i])
				inc[i] = inc[j] + arr[i];
	for (int i = n - 2; i >= 0; i--)
		for (int j = n - 1; j > i; j--)
			if (arr[i] > arr[j] && dec[i] < dec[j] + arr[i])
				dec[i] = dec[j] + arr[i];
	for (int i = 0; i < n; i++)
		max_sum = max(max_sum, (dec[i] + inc[i] - arr[i]));
	return max_sum;
}

int main()
{
	int test; cin >> test;
    while ( test-- ) {
        int n; cin >> n;
        int arr[n+1];
        for ( int i = 0; i < n; i++ ) cin >> arr[i];
        cout << solve(arr,n) << endl;
    }
	return 0;
}
