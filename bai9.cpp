//9.Vi?t chuong tr�nh t�m ra s? luy th?a 2 d?u ti�n l?n hon 1000.
#include <stdio.h>
#include <math.h>
int main()
{
	for(int i=sqrt(1000);i<=1000;i++){
		if(pow(i,2)>1000){
			printf("%d",i);
			break;
		}
	}
	

	return 0;
}

// code by Manh

