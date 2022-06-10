#include <stdio.h>
int UCLN(int ,int );
int UCLN(int a,int b)
{
	if ( a > b ) {
		if ( b==0 ) return a;
		else return UCLN( b, a%b);
	}
	else { 
		if ( a==0 ) return b;
		else return UCLN( b%a , a );
	}
}

int main(){
	int a,b;
	printf("Nhap phan so : ");
	scanf("%d %d",&a,&b);
	printf("Phan so toi gian la : %d / %d ",a/UCLN(a,b), b/UCLN(a,b));
	return 0;
}
