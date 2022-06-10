/*4.Vi?t chuong trình nh?p vào s? n và in ra màn hình dãy nhu sau: 1 3 5......n .... 6 4 2 
( nghia là dãy s? có các s? nguyên duong l? nh? hon n n?m bên tay trái còn các s? ch?n s? n?m bên tay ph?i.) 
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

