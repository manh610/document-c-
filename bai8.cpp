/*8.S? ch�nh phuong l� s? m� can b?c hai c?a n� l� 1 s? nguy�n duong. 
Vi?t chuong tr�nh nh?p v�o m?t s? nguy�n duong n v� cho bi?t trong kho?ng t? 1 t?i 2n c� bao nhi�u s? ch�nh phuong. 
H�y in ra d�y s? ch�nh phuong d�.
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=2*n;i++){
		float a=sqrt(i);
		if(pow(a,2)-i==0) printf("%d ",i);
	}

	return 0;
}

// code by Manh

