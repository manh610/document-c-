#include <iostream>
#include <algorithm>
using namespace std;

int findMinOpeartion(int matrix[][], int n)
{
	int sumRow[n], sumCol[n];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			sumRow[i] += matrix[i][j];
			sumCol[j] += matrix[i][j];
		}

	int maxSum = 0;
	for (int i = 0; i < n; ++i) {
		maxSum = max(maxSum, sumRow[i]);
		maxSum = max(maxSum, sumCol[i]);
	}

	int count = 0;
	for (int i = 0, j = 0; i < n && j < n;) {
		int diff = min(maxSum - sumRow[i],	maxSum - sumCol[j]);
		matrix[i][j] += diff;
		sumRow[i] += diff;
		sumCol[j] += diff;
		count += diff;
		if (sumRow[i] == maxSum) ++i;

		if (sumCol[j] == maxSum) ++j;
	}
	return count;
}

void printMatrix(int matrix[][], int n)
{
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}
}

int main()
{
	int matrix[][] = { { 1, 2 },{ 3, 4 } };
	cout << findMinOpeartion(matrix, 2) << "\n";
	printMatrix(matrix, 2);
	return 0;
}

