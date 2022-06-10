#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int array[n+5];
	for (int i = 0; i < n; i++) {
		scanf("%d",&array[i]);
	}
	int max = array[0];
	for (int i = 1; i < n; i++){
		if (max < array[i]) max = array[i];
	}
	int max2 = -10000000;
	for (int i = 1; i < n; i++){
		if (max2 < array[i] && array[i] != max) max2 = array[i];
	}
	printf("%d",max2);
	
	return 0;
}
