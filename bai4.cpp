/*4.Vi?t chuong tr�nh nh?p v�o s? n v� in ra m�n h�nh d�y nhu sau: 1 3 5......n .... 6 4 2 
( nghia l� d�y s? c� c�c s? nguy�n duong l? nh? hon n n?m b�n tay tr�i c�n c�c s? ch?n s? n?m b�n tay ph?i.) 
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1)printf("%d ",i);
	}
	for(int i=n;i>=1;i--){
		if(i%2==0) printf("%d ",i);
	}
	return 0;
}

// code by Manh

