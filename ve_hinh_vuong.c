#include <stdio.h>

#define max 100

void print(int a[][max], int size){
	int i,j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

void innerPattern(int n) {
	
	int size = 2 * n - 1, front = 0,i,j;
	int back = size - 1;
	int a[max][max];
	while (n != 0)
	{
		for ( i = front; i <= back; i++) {
			for (j = front; j <= back; j++) {
				if (i == front || i == back || j == front || j == back)
					a[i][j] = n;
			}
		}
		++front;
		--back;
		--n;
	}
	print(a, size);
}

int main()
{
	int n;
	scanf("%d",&n);
	innerPattern(n);
	
	return 0;
}


