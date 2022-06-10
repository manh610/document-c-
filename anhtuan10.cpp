#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n+5];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	// co N-1 buoc chuyen doi
	for(int i=1; i<n; i++){
		// o moi buoc chuyen doi, muc tieu: dua so be nhat ve cuoi day
		// nen ta so sanh 2 phan tu ke nhau va doi cho neu can thiet
		for(int j=0; j<n-i; j++){
			if( a[j] < a[j+1] ){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
		// in ket qua cua moi buoc, neu khong muon in cac buoc giong nhau thi dung bien kiem tra la xong
		printf("buoc thu %d : ", i);
		for(int j=0; j<n; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}
