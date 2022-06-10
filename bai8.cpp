/*8.S? chính phuong là s? mà can b?c hai c?a nó là 1 s? nguyên duong. 
Vi?t chuong trình nh?p vào m?t s? nguyên duong n và cho bi?t trong kho?ng t? 1 t?i 2n có bao nhiêu s? chính phuong. 
Hãy in ra dãy s? chính phuong dó.
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

