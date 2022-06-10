#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n+5], b[m+5];
	// nhap 2 mang A, B
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<m; i++){
		scanf("%d", &b[i]);
	}

	// sap xep tang dan mang A
	for(int i=1; i<n; i++){		// burble sort
		for(int j=0; j<n-i; j++){
			if( a[j] > a[j+1] ){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}

	// sap xep tang dan mang B
	for(int i=1; i<m; i++){		// burble sort
		for(int j=0; j<m-i; j++){
			if( b[j] > b[j+1] ){
				int tmp = b[j];
				b[j] = b[j+1];
				b[j+1] = tmp;
			}
		}
	}

	// in day so tang dan la tap hop cac phan tu cua 2 mang A, B
	int i = 0, j = 0;

	for( ; i<n; i++){
		for( ; j<m; j++){
			if( b[j] <= a[i] ){		// khi b[j] <= a[i] thi lay phan tu b[j]
				printf("%d ", b[j]);
			}
			else{	// khi a[i] < b[j] thi lay phan tu a[i] xong thoat vong for( j )
				printf("%d ", a[i]);	
				break;
			}
		}

		if( j==m ){		// b[m-1] <= a[i] thi for( j ) khong bi break nen j = m. Vay nen chi chay for( i ) va in ra a[i]
			printf("%d ", a[i]);
		}

		else if( i==n-1 ){	// a[n-1] < b[j] thi for ( j ) bi break. Vay nen luc i = n-1 thi j chua = m nen phai for( j ) va in ra b[j]
			for( ; j<m; j++){
				printf("%d ", b[j]);
			}
		}
	}
}
