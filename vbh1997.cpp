#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int array[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d",&array[i]);
	}
	for (int i = 0; i < n - 1 ; i++){
		for (int j = n - 1; j > i; j--){
			if (array[j] < array[j-1]){
				array[j] += array[j-1];
				array[j-1] = array[j] - array[j-1];
				array[j] = array [j] - array[j-1];
			}
		}
	}
	for (int i = 0; i < n; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
